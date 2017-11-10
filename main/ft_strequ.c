#include "libft.h"
#include <stdio.h>

int		main(int ac, char **av)
{
	if (ac == 3)
		printf("ft_strequ:	%i\n", ft_strequ(av[1], av[2]));
	return (0);
}
