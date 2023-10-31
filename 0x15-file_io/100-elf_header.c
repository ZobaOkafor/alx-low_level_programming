#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <elf.h>


void handle_magic(unsigned char *p);
void handle_class(unsigned char *p);
void handle_data(unsigned char *p);
void handle_version(unsigned char *p);
void handle_osabi(unsigned char *p);
void handle_abi(unsigned char *p);
void handle_type(unsigned char *p);
void handle_entry_point_addr(unsigned long int e_entry, unsigned char *p);
int check_if_elf(unsigned char *p);
void check_system(unsigned char *p);



/**
 * handle_magic - This function handles the ELF header magic information
 * @p: pointer
 *
 */

void handle_magic(unsigned char *p)
{
	int i;

	printf("  Magic:  ");

	for (i = 0; i < 16; i++)
		printf(" %02x", p[i]);

	printf("\n");
}


/**
 * handle_class - This function handles the class of an ELF header
 * @p: pointer
 *
 */

void handle_class(unsigned char *p)
{
	printf("  Class:                             ");

	if (p[EI_CLASS] == ELFCLASSNONE)
		printf("none\n");

	else if (p[EI_CLASS] == ELFCLASS32)
		printf("ELF32\n");

	else if (p[EI_CLASS] == ELFCLASS64)
		printf("ELF64\n");

	else
		printf("unknown: %x>\n", p[EI_CLASS]);
}


/**
 * handle_data - This function handles the data of an ELF header
 * @p: pointer
 *
 */

void handle_data(unsigned char *p)
{
	unsigned char data = p[EI_DATA];

	printf("  Data:                              2's complement");

	if (data == ELFDATA2LSB)
		printf(", little endian\n");

	else if (data == ELFDATA2MSB)
		printf(", big endian\n");

	else
		printf("\n");
}


/**
 * handle_version - This function handles the version of an ELF header
 * @p: pointer
 *
 */

void handle_version(unsigned char *p)
{
	unsigned char vers = p[EI_VERSION];

	printf("  Version:                           %d", vers);

	if (vers == EV_CURRENT)
		printf(" (current)");

	printf("\n");
}


/**
 * handle_osabi - This function handles the os/abi of an ELF header
 * @p: pointer
 *
 */

void handle_osabi(unsigned char *p)
{
	unsigned char osabi = p[EI_OSABI];
	unsigned char abi_vers = p[EI_ABIVERSION];

	printf("  OS/ABI:                            ");

	if (osabi == ELFOSABI_NONE)
		printf("UNIX - System V\n");

	else if (osabi == ELFOSABI_NETBSD)
		printf("UNIX - NetBSD\n");

	else if (osabi == ELFOSABI_SOLARIS)
		printf("UNIX - Solaris\n");

	else
		printf("<unknown: %x>\n", osabi);

	printf("  ABI Version:                       %d\n", abi_vers);
}


/**
 * handle_abi - This function handles the abi version of an ELF header
 * @p: pointer
 *
 */

void handle_abi(unsigned char *p)
{
	printf("  ABI Version:                       %d\n",
			p[EI_ABIVERSION]);
}


/**
 * handle_type - This function handles the type of an ELF header
 * @p: pointer
 *
 */

void handle_type(unsigned char *p)
{
	unsigned char type;
	unsigned char data = p[EI_DATA];

	if (data == ELFDATA2LSB)
		type = p[16];

	else
		type = p[17];

	printf("  Type:                              ");

	if (type == ET_NONE)
		printf("NONE (No file type)\n");

	else if (type == ET_REL)
		printf("REL (Relocatable file)\n");

	else if (type == ET_EXEC)
		printf("EXEC (Executable file)\n");

	else if (type == ET_DYN)
		printf("DYN (Shared object file)\n");

	else if (type == ET_CORE)
		printf("CORE (Core file)\n");

	else
		printf("<unknown: %x>\n", type);
}


/**
 * handle_entry_point_addr - This function handles the
 * entry point address of an ELF header
 * @e_entry: the ELF entry point address
 * @p: pointer
 *
 */

void handle_entry_point_addr(unsigned long int e_entry, unsigned char *p)
{
	unsigned long int swapped;
	int i;

	printf("  Entry point address:               ");

	if (p[EI_DATA] == ELFDATA2MSB)
	{
		swapped = 0;
		for (i = 0; i < sizeof(e_entry); i++)
		{
			swapped = (swapped << 8) | (e_entry & 0xFF);
			e_entry >>= 8;
		}

	if (p[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)e_entry);

	else
		printf("%#lx\n", e_entry);
}


/**
 * check_if_elf - This function checks if a file is an ELF file
 * @p: pointer
 *
 * Return: 0 on success
 */

int check_if_elf(unsigned char *p)
{
	int address = (int)p[0];
	unsigned char E = p[1];
	unsigned char L = p[2];
	unsigned char F = p[3];

	if (address == 127 && E == 'E' && L == 'L' && F == 'F')
		return (1);

	return (0);
}


/**
 * check_system - This function checks the system
 * @p: pointer
 *
 */

void check_system(unsigned char *p)
{
	unsigned char sys = p[4] + '0';

	if (sys == '0')
	{
		dprintf(STDERR_FILENO, "Error: Invalid system value\n");
		exit(98);
	}

	printf("ELF Header:\n");
	handle_magic(p);

	if (sys == '1')
		printf("  Class:                             ELF32\n");

	else if (sys == '2')
		printf("  Class:                             ELF64\n");

	handle_data(p);
	handle_version(p);
	handle_osabi(p);
	handle_type(p);
	handle_class(p);
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
	unsigned char p[27];

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n");
		exit(98);
	}

	fd = open(argv[1], O_RDONLY);

	if (fd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't open file\n");
		exit(98);
	}

	lseek(fd, 0, SEEK_SET);
	rd = read(fd, p, 27);

	if (rd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file\n");
		exit(98);
	}

	if (!check_if_elf(p))
	{
		dprintf(STDERR_FILENO, "Error: No such file\n");
		exit(98);
	}

	check_system(p);
	close(fd);

	return (0);
}
