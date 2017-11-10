#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int		main(int ac, char **av)
{
	if (ac == 2)
		{
			printf("isascii:	%i\n", isascii(*av[1]));
			printf("ft_isascii:	%i\n", ft_isascii(*av[1]));
		}
	return (0);
}
