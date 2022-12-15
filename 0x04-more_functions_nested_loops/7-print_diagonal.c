/**
 * print_diagonal - Check description
 * Description: It tells if lower case
 * @n: - An input parameter
 * d by a new line
 * Return: 1 when true and 0 when false
 */

void print_diagonal(int n)
{
	int c;

	if (n <= 0)
	{
		n = 0;
	}
	else
	{
		for (c = 1; c <= n; c++)
		{
			_putchar('\\');
		}
	}
	_putchar('\n');
}
