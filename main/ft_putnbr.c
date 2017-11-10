#include "libft.h"

int		main(int ac, char **av)
{
	if (ac == 2)
	{
		ft_putnbr(ft_atoi(av[1]));
		ft_putchar('\n');
	}
	return (0);
}
