#include <stdio.h>
#include "libft.h"

int		main(int ac, char **av)
{
	char *str;

	if (ac ==4)
	{
		printf("Before: %s\n", av[1]);
		str = ft_strsub(av[1], (unsigned int)ft_atoi(av[2]), \
				(size_t)ft_atoi(av[3]));
		printf("After:  %s\n", str);
		ft_strdel(&str);
	}
	return (0);
}
