#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <elf.h>

int check_elf(char *p);
void check_system(char *p);
void handle_magic(char *p);
void handle_address(char *p);
void fetch_data(char *p);
void handle_version(char *p);
void handle_type(char *p);
void handle_osabi(char *p);


/**
 * check_elf - This function checks if a file is an elf file
 * @p: pointer
 *
 * Return: 1 if it is, or 0 if not
 */

int check_elf(char *p)
{
	int addr = (int)p[0];
	char E = p[1];
	char L = p[2];
	char F = p[3];

	if (addr == 127 && E == 'E' && L == 'L' && F == 'F')
		return (1);

	return (0);
}


/**
 * check_system - This function checks the system
 * @p: pointer
 *
 */

void check_system(char *p)
{
	char sys = p[4] + '0';

	if (sys == '0')
		exit(98);

	printf("ELF Header:\n");
	handle_magic(p);

	if (sys == '1')
		printf("  Class:                             ELF32\n");

	if (sys == '2')
		printf("  Class:                             ELF64\n");

	fetch_data(p);
	handle_version(p);
	handle_osabi(p);
	handle_type(p);
	handle_address(p);
}


/**
 * handle_magic - This function handles the magic info of the ELF header
 * @p: pointer
 *
 */

void handle_magic(char *p)
{
	int idx;

	printf("  Magic:  ");

	for (idx = 0; idx < 16; idx++)
		printf(" %02x", p[idx]);

	printf("\n");

}


/**
 * handle_address - This function handles the ELF's address
 * @p: pointer
 *
 */

void handle_address(char *p)
{
	int i;
	int start;
	char sys;

	printf("  Entry point address:               0x");

	sys = p[4] + '0';
	if (sys == '1')
	{
		start = 26;
		printf("80");
		for (i = start; i >= 22; i--)
		{
			if (p[i] > 0)
				printf("%x", p[i]);
			else if (p[i] < 0)
				printf("%x", 256 + p[i]);
		}
		if (p[7] == 6)
			printf("00");
	}

	if (sys == '2')
	{
		start = 26;
		for (i = start; i > 23; i--)
		{
			if (p[i] >= 0)
				printf("%02x", p[i]);

			else if (p[i] < 0)
				printf("%02x", 256 + p[i]);

		}
	}
	printf("\n");
}


/**
 * fetcht_data - This function fetches the ELF header data
 * @p: pointer
 *
 */

void fetch_data(char *p)
{
	char data = p[5];

	printf("  Data:                              2's complement");
	if (data == 1)
		printf(", little endian\n");

	if (data == 2)
		printf(", big endian\n");
}


/**
 * handle_version - This function handles the ELF header version
 * @p: pointer
 *
 */

void handle_version(char *p)
{
	int version = p[6];

	printf("  Version:                           %d", version);

	if (version == EV_CURRENT)
		printf(" (current)");

	printf("\n");
}


/**
 * handle_type - This function handles the ELF header type
 * @p: pointer
 *
 */

void handle_type(char *p)
{
	char type = p[16];

	if (p[5] == 1)
		type = p[16];
	else
		type = p[17];

	printf("  Type:                              ");
	if (type == 0)
		printf("NONE (No file type)\n");
	else if (type == 1)
		printf("REL (Relocatable file)\n");
	else if (type == 2)
		printf("EXEC (Executable file)\n");
	else if (type == 3)
		printf("DYN (Shared object file)\n");
	else if (type == 4)
		printf("CORE (Core file)\n");
	else
		printf("<unknown: %x>\n", type);
}


/**
 * handle_osabi - This function handles the ELF header osabi
 * @p: pointer
 *
 */

void handle_osabi(char *p)
{
	char osabi = p[7];

	printf("  OS/ABI:                            ");
	if (osabi == 0)
		printf("UNIX - System V\n");
	else if (osabi == 2)
		printf("UNIX - NetBSD\n");
	else if (osabi == 6)
		printf("UNIX - Solaris\n");
	else
		printf("<unknown: %x>\n", osabi);

	printf("  ABI Version:                       %d\n", p[8]);
}


/**
 * main - This program displays the information contained in the
 * ELF header at the start of an ELF file
 * @argc: argument count
 * @argv: array of pointers
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int fd, rd;
	char p[27];

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n");
		exit(98);
	}

	fd = open(argv[1], O_RDONLY);

	if (fd < 0)
	{
		dprintf(STDERR_FILENO, "Error: file can't be open\n");
		exit(98);
	}

	lseek(fd, 0, SEEK_SET);
	rd = read(fd, p, 27);

	if (rd == -1)
	{
		dprintf(STDERR_FILENO, "Error: The file can't be read\n");
		exit(98);
	}

	if (!check_elf(p))
	{
		dprintf(STDERR_FILENO, "Error: It is not an ELF\n");
		exit(98);
	}

	check_system(p);
	close(fd);

	return (0);
}
