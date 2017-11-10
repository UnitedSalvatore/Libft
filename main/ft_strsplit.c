#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int		main(int ac, char **av)
{
	char	**str;
	size_t	i;
	while (ac == 3)
	{
		str = NULL;
		printf("Src before: |%s|\n", av[1]);
		str = ft_strsplit(av[1], *av[2]);
		printf("Src after:  |%s|\n", av[1]);
		i = 0;
		while (str && str[i])
			printf("Dst after: |%s|\n", str[i++]);
		i = 0;
		while (str && str[i])
			ft_strdel(&str[i++]);
		ft_strdel((char **)&str);
	}
	return (0);
}
