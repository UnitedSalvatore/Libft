#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	if (ac == 5)
		{
			int c;
			size_t n;
		   
			c = atoi(av[3]);
			n = (size_t)(atoi(av[4]));
			printf("memset: %s\n", (char *)memset(av[1], c, n));
			printf("ft_memset: %s\n", (char *)ft_memset(av[2], c, n));
		}
	return (0);
}
