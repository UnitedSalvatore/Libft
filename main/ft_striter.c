#include "libft.h"
#include <stdio.h>

static void	iter(char *c)
{
	(*c)++;
}

int			main(int ac, char **av)
{
	if (ac == 2)
	{
		printf("Before: %s\n", av[1]);
		ft_striter(av[1], iter);
		printf("After:  %s\n", av[1]);
	}
	return (0);
}
