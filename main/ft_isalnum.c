#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int		main(int ac, char **av)
{
	if (ac == 2)
		{
			printf("isalnum:	%i\n", isalnum(*av[1]));
			printf("ft_isalnum:	%i\n", ft_isalnum(*av[1]));
		}
	return (0);
}
