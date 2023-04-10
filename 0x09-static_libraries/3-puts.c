#include "main.h"

/**
 *
 *  * _putchar - writes the character c to stdout
 *
 *   * @c: The character to print
 *
 *    *
 *
 *     * Return: On success 1.
 *
 *      * On error, -1 is returned, and errno is set appropriately*/

void _puts(char *s)
{
    int i;
    for (i = 0; s[i] != '\0'; i++)
    {
        _putchar(s[i]);
    }
}