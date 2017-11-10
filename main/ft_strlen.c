#include "libft.h"
#include <stdio.h>

int		main(int ac, char **av)
{
	if (ac == 2)
	{
		printf("strlen: %lu\n", strlen(av[1]));
		printf("ft_strlen: %lu\n", ft_strlen(av[1]));
	}
	return (0);
}
