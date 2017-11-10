#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

int	main(int ac, char **av)
{
	char *dst1;
	char *dst2;

	if (ac == 2)
	{
		dst1 = strdup(av[1]);
		dst2 = ft_strdup(av[1]);
		printf("strdup:    dst1: %s, src: %s\n", dst1, av[1]);
		printf("ft_strdup: dst2: %s, src: %s\n", dst2, av[1]);
		free(dst1);
		free(dst2);
	}
	return (0);
}
