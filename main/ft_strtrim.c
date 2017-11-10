#include "libft.h"
#include <stdio.h>

int			main(int ac, char **av)
{
	char *str;

	if(ac == 2)
	{
		str = NULL;
		printf("Before source: %s.\n", av[1]);
		printf("Before result: %s.\n", str);
		str = ft_strtrim(av[1]);
		printf("After  source: %s.\n", av[1]);
		printf("After  result: %s.\n", str);
		ft_strdel(&str);
	}
	return (0);
}
