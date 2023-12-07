#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * generate_password - generates a password based on the given input string
 * @input: the input string
 * @pw: the generated password
 *
 * Return: nothing
 */

void generate_password(const char *input, char *pw) /*@pw means password*/
{
	int i, tmp;
	const char *code;
	int len = strlen(input);

	code = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";

	pw[0] = code[(len ^ 59) & 63];

	tmp = 0;
	for (i = 0; i < len; i++)
		tmp += input[i];
	pw[1] = code[(tmp ^ 79) & 63];

	tmp = 1;
	for (i = 0; i < len; i++)
		tmp *= input[i];
	pw[2] = code[(tmp ^ 85) & 63];

	tmp = 0;
	for (i = 0; i < len; i++)
	{
		if (input[i] > tmp)
			tmp = input[i];
	}
	srand(tmp ^ 14);
	pw[3] = code[rand() & 63];

	tmp = 0;
	for (i = 0; i < len; i++)
		tmp += (input[i] * input[i]);
	pw[4] = code[(tmp ^ 239) & 63];

	for (i = 0; i < input[0]; i++)
		tmp = rand();
	pw[5] = code[(tmp ^ 229) & 63];

	pw[6] = '\0';
}



/**
 * main - generates and prints passwords for the crackme5 executable
 * @argc: argumnets count
 * @argv: arguments array
 *
 * Return: 0 Always
 */

int main(int argc, char *argv[])
{
	char password[7];

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s <input>\n", argv[0]);
		return (1);
	}

	generate_password(argv[1], password);

	printf("%s\n", password);
	return (0);
}
