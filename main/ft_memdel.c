#include "libft.h"
#include <stdio.h>

int		main(int ac, char **av)
{
	char *str;

	if (ac == 2)
	{
		str = ft_strdup(*++av);
		printf("Before: %s\n", str);
		ft_memdel((void *)&str);
		printf("After:  %s\n", str);
	}
	return (0);
}