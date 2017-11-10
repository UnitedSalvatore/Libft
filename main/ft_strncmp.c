#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int		main(int ac, char **av)
{
	if (ac == 4)
		{
			printf("memcmp:		%i\n", strncmp(av[1], av[2], (size_t)atoi(av[3])));
			printf("ft_memcmp:	%i\n", ft_strncmp(av[1], av[2], (size_t)atoi(av[3])));
		}
	return (0);
}
