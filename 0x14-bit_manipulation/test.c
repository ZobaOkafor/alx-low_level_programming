#include "main.h"

/**
 * print_binary - print binary representation of a number
 * @n: decimal number to print as binary
 */
void print_binary(unsigned long int n)
{
    int num_bits;
    int print_bit;
    int i;
    int bit;
    unsigned long int mask;

    if (n == 0)
    {
        _putchar('0');
        return;
    }

    num_bits = sizeof(n) * 8; 

    print_bit = 0; 

    for (i = num_bits - 1; i >= 0; i--)
    {
        mask = 1UL << i;  
        bit = (n & mask) ? 1 : 0;     

        if (bit || print_bit)
        {
            _putchar(bit + '0');
            print_bit = 1;      
        }
    }
}

int main(void)
{
    print_binary(0);
    printf("\n");
    print_binary(1);
    printf("\n");
    print_binary(98);
    printf("\n");
    print_binary(1024);
    printf("\n");
    print_binary((1 << 10) + 1);
    printf("\n");
    return (0);
}
