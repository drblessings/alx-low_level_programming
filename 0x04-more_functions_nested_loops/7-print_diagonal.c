#include "main.h"

/**
 * print_diagonal - Prints '\' n times
 * specifies how many times \ is printed
 * Return: null/void
 */
void print_diagonal(int n)
{
int i = 0, j;

while (i < n && n > 0)
{
j = 0;
while (j < 1)
{
_putchar('');
j++;
}

_putchar('\\');
_putchar('\n');
i++;
}
if (i == 0)
_putchar('\n');
}
