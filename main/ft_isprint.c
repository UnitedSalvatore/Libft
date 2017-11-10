#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int		main(int ac, char **av)
{
	if (ac == 2)
		{
			printf("isprint:	%i\n", isprint(*av[1]));
			printf("ft_isprint:	%i\n", ft_isprint(*av[1]));
		}
	return (0);
}
