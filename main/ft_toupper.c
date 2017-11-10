#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int		main(int ac, char **av)
{
	if (ac == 2)
		{
			printf("toupper:	%c\n", toupper(*av[1]));
			printf("ft_toupper:	%c\n", ft_toupper(*av[1]));
		}
	return (0);
}
