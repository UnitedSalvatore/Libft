#include "libft.h"
#include <stdio.h>
#include <bsd/string.h>

int		main(int ac, char **av)
{
	size_t n;

	if (ac == 4)
	{
		n = (size_t)ft_atoi(av[3]);
		printf("strnstr:	%s\n", strnstr(av[1], av[2], n));
		printf("ft_strnstr:	%s\n", ft_strnstr(av[1], av[2], n));
	}
	return (0);
}
