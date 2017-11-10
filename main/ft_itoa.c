#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

int		main(int ac, char **av)
{
	char *str;

	if (ac == 2)
	{
		str = ft_itoa(ft_atoi(av[1]));
		printf("ft_itoa: |%s|\n", str);
		ft_strdel(&str);
	}
	return (0);
}
