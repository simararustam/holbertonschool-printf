#include "main.h"

/**
 * print_number - print number
 * @r: length of numbers
 * @s: number to be printed
 * Return: length of str
 */
int print_number(unsigned int r, int s)
{
	int modulus = 0, m = 0;
	unsigned int n;
	char number[11];

	if (s < 0)
	{
		_putchar('-');
		r++;
		n = -1 * s;
	}
	else
		n = s;
	if (n == 0)
	{
		_putchar(48);
		return (r + 1);
	}
	while (n > 0)
	{
		modulus = n % 10;
		number[m] = modulus + 48;
		n = n / 10;
		m++;
	}
	r = r + m;
	m = m - 1;
	while (m >= 0)
	{
		_putchar(number[m]);
		m--;
	}
	return (r);
}
