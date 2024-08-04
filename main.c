#include <stdio.h>
#include "main.h"

/**
 * main - Entry point for testing _printf
 *
 * Return: Always 0
 */
int main(void)
{
    int len; /* Length of the printed output */

    /* Test printing integers */
    len = _printf("Integer: %d\n", 1234);
    _printf("Length: [%d]\n", len);
    len = _printf("Another integer: %i\n", -5678);
    _printf("Length: [%d]\n", len);
    
    /* Test printing percent sign */
    _printf("Percent sign: %%\n");

    return (0); /* Return success code */
}

