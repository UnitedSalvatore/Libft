#include "libft.h"
#include <stdio.h>

int		main(int ac, char **av)
{
	if (ac == 4)
		printf("ft_strnequ:	%i\n", ft_strnequ(av[1], av[2], (size_t)ft_atoi(av[3])));
	return (0);
}
