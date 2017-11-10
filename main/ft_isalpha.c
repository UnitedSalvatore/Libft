#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int		main(int ac, char **av)
{
	if (ac == 2)
		{
			printf("isalpha:	%i\n", isalpha(*av[1]));
			printf("ft_isalpha:	%i\n", ft_isalpha(*av[1]));
		}
	return (0);
}
