#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int		main(int ac, char **av)
{
	if (ac == 4)
	{
		printf("memchr: %s\n", (char *)memchr(av[1], atoi(av[2]), (size_t)atoi(av[3])));
		printf("ft_memchr: %s\n", (char *)ft_memchr(av[1], atoi(av[2]), (size_t)atoi(av[3])));
	}
	return (0);
}
