#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int		main(int ac, char **av)
{
	if (ac == 3)
		{
			printf("memcmp:		%i\n", strcmp(av[1], av[2]));
			printf("ft_memcmp:	%i\n", ft_strcmp(av[1], av[2]));
		}
	return (0);
}
