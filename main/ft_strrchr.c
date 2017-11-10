#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int		main(int ac, char **av)
{
	if (ac == 3)
	{
		printf("strrchr:	%s\n", (char *)strrchr(av[1], atoi(av[2])));
		printf("ft_strrchr:	%s\n", (char *)ft_strrchr(av[1], atoi(av[2])));
	}
	return (0);
}
