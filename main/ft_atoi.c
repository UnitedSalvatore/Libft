#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int		main(int ac, char **av)
{
	if (ac == 2)
		{
			printf("atoi:		%i\n", atoi(av[1]));
			printf("ft_atoi:	%i\n", ft_atoi(av[1]));
		}
	return (0);
}
