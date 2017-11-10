#include "libft.h"

int		main(int ac, char **av)
{
	if (ac == 3)
		ft_putstr_fd(av[1], ft_atoi(av[2]));
	return (0);
}
