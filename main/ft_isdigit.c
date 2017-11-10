#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int		main(int ac, char **av)
{
	if (ac == 2)
		{
			printf("isdigit:	%i\n", isdigit(*av[1]));
			printf("ft_isdigit:	%i\n", ft_isdigit(*av[1]));
		}
	return (0);
}
