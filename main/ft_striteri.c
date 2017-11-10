#include "libft.h"
#include <stdio.h>

static void	iteri(unsigned int i, char *c)
{
	if (i == (unsigned char)(*c - 48))
		(*c)++;
}

int			main(int ac, char **av)
{
	if (ac == 2)
	{
		printf("Before: %s\n", av[1]);
		ft_striteri(av[1], iteri);
		printf("After:  %s\n", av[1]);
	}
	return (0);
}
