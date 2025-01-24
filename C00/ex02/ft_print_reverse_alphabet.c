
#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	alphabetr;

	alphabetr = 'z';
	while (alphabetr >= 'a')
	{
		write (1, &alphabetr, 1);
		alphabetr--;
	}
}
