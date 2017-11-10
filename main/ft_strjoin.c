#include "libft.h"
#include <stdio.h>

int		main(int ac, char **av)
{
	char *str;

	if (ac == 3)
	{
		printf("s1: %s, s2: %s.\n", av[1], av[2]);
		str = ft_strjoin(av[1], av[2]);
		printf("ft_strjoin: %s.\n", str);
		ft_strdel(&str);
	}
}
