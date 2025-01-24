
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	affiche(int n)
{
	ft_putchar(n / 10 + '0');
	ft_putchar(n % 10 + '0');
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	b = 1;
	while (a <= 98)
	{
		while (b <= 99)
		{
			affiche(a);
			ft_putchar(' ');
			affiche(b);
			if (a != 98)
				write(1, ", ", 2);
			b++;
		}
		a++;
		b = a + 1;
	}
}

