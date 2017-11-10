#include "libft.h"
#include <stdio.h>

static char iter(char c)
{
	return (++c);
}

int			main(int ac, char **av)
{
	char *str;

	if (ac == 2)
	{
		printf("Before: %s\n", av[1]);
		str = ft_strmap(av[1], iter);
		printf("After:  %s\n", str);
		ft_strdel(&str);
	}
	return (0);
}
