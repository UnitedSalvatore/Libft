#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int		main(int ac, char **av)
{
	if (ac == 2)
		{
			printf("tolower:	%c\n", tolower(*av[1]));
			printf("ft_tolower:	%c\n", ft_tolower(*av[1]));
		}
	return (0);
}
