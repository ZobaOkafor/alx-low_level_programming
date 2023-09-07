#include <unistd.h>

int main(void)
{
	const char *text = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(2, text, sizeof(text) - 2);
	return (1);
}
