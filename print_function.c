#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes a single character to stdout
 * @c: character to be written
 *
 * Return: 1 on success, -1 on error
 */
static int _putchar(char c)
{
    return write(1, &c, 1);
}

/**
 * _printf - produces output according to a format
 * @format: format string
 *
 * Return: the number of characters printed (excluding null byte)
 */
int _printf(const char *format, ...)
{
    va_list args;
    const char *p;
    char c;
    char *s;
    int count = 0;

    va_start(args, format);

    if (format == NULL)
        return (-1);

    for (p = format; *p != '\0'; p++)
    {
        if (*p != '%')
        {
            _putchar(*p);
            count++;
        }
        else
        {
            p++;
            switch (*p)
            {
                case 'c':
                    c = va_arg(args, int); /* char promoted to int */
                    _putchar(c);
                    count++;
                    break;
                case 's':
                    s = va_arg(args, char *);
                    if (s == NULL)
                        s = "(null)";
                    while (*s)
                    {
                        _putchar(*s++);
                        count++;
                    }
                    break;
                case '%':
                    _putchar('%');
                    count++;
                    break;
                default:
                    _putchar('%');
                    _putchar(*p);
                    count += 2;
                    break;
            }
        }
    }

    va_end(args);
    return (count);
}

