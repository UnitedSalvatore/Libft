#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int		main(int ac, char **av)
{
	if (ac == 3)
	{
		printf("strchr:		%s\n", (char *)strchr(av[1], atoi(av[2])));
		printf("ft_strchr:	%s\n", (char *)ft_strchr(av[1], atoi(av[2])));
	}
	return (0);
}
