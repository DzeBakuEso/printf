#include <stdarg.h>
#include <unistd.h> /* For the write function */
#include "main.h"

/**
 * _printf - Custom printf function
 * @format: Format string
 *
 * Return: Number of characters printed
 */
int _printf(const char *format, ...)
{
    va_list args; /* Initialize variable argument list */
    int count = 0; /* Count of characters printed */
    const char *ptr; /* Pointer to traverse the format string */
    char buf[100]; /* Buffer to hold string representation of numbers */
    int num; /* Number to be printed */
    int len; /* Length of the string representation of the number */
    int i; /* Loop index */
    int temp; /* Temporary variable for number processing */
    int digits[10]; /* Array to hold digits of the number */
    int digit_count; /* Count of digits */

    va_start(args, format); /* Start processing variable arguments */

    /* Traverse each character of the format string */
    for (ptr = format; *ptr; ptr++)
    {
        /* Handle the case where '%' is encountered */
        if (*ptr == '%' && (*(ptr + 1) == 'd' || *(ptr + 1) == 'i'))
        {
            num = va_arg(args, int); /* Get the integer argument */

            /* Convert the integer to a string */
            len = 0; /* Initialize length of the number string */
            if (num < 0)
            {
                buf[len++] = '-'; /* Add '-' for negative numbers */
                num = -num; /* Make the number positive for processing */
            }
            /* Convert number to string (reverse order) */
            temp = num; /* Temporary variable for number processing */
            digit_count = 0; /* Initialize count of digits */
            if (num == 0)
            {
                buf[len++] = '0'; /* Special case for zero */
            }
            else
            {
                while (temp > 0)
                {
                    digits[digit_count++] = temp % 10; /* Extract digit */
                    temp /= 10; /* Reduce the number */
                }
                for (i = digit_count - 1; i >= 0; i--)
                {
                    buf[len++] = digits[i] + '0'; /* Convert digit to character */
                }
            }

            write(1, buf, len); /* Write the number to standard output */
            count += len; /* Update the count of characters printed */
            ptr++; /* Skip the format specifier */
        }
        /* Handle the case where '%%' is encountered */
        else if (*ptr == '%' && *(ptr + 1) == '%')
        {
            write(1, "%", 1); /* Print the '%' sign */
            count++; /* Update the count of characters printed */
            ptr++; /* Skip the '%' */
        }
        /* Handle regular characters */
        else
        {
            write(1, ptr, 1); /* Print the character */
            count++; /* Update the count of characters printed */
        }
    }

    va_end(args); /* End processing variable arguments */
    return count; /* Return the total count of characters printed */
}

