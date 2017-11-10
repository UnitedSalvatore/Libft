#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int		main(int ac, char **av)
{
	if (ac == 4)
		{
			size_t n;
		   
			n = (size_t)atoi(av[3]);
			printf("memcmp: %i\n", memcmp(av[1], av[2], n));
			printf("ft_memcmp: %i\n", ft_memcmp(av[1], av[2], n));
			printf("n: %lu\n", n);
		}
	return (0);
}
