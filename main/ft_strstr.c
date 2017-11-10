#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int		main(int ac, char **av)
{
	if (ac == 3)
	{
		printf("strstr:		%s\n", strstr(av[1], av[2]));
		printf("ft_strstr:	%s\n", ft_strstr(av[1], av[2]));
	}
	return (0);
}
