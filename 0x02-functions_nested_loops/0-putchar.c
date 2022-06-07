#include "main.h"

/**
 * main - Prints Holberton as a message.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        int str[] = "_putchar";
        int count, sz;

        sz = sizeof(str) / sizeof(int);
        for (count = 0; count < sz; count++)
        {
                putchar(str[count]);
        }
         putchar('\n');
i        return (0);
}

