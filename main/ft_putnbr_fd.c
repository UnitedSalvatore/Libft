#include "libft.h"

int		main(int ac, char **av)
{
	if (ac == 3)
	{
		ft_putnbr_fd(ft_atoi(av[1]), ft_atoi(av[2]));
		ft_putchar_fd('\n', ft_atoi(av[2]));
	}
	return (0);
}
