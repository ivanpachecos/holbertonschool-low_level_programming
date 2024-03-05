#include "main.h"

/**
  *  - half string
  *
  * @str: string
  */

int _strlen(char *str)
{
    int length = 0;

    while (*str != '\0')
    {
        length++;
        str++;
    }

    return length;
}

void puts_half(char *str)
{
    int length = _strlen(str);
    int i;
    int start = (length - 1) / 2;

    for (i = start; str[i] != '\0'; i++)
    {
        _putchar(str[i]);
    }
    _putchar('\n');
}
