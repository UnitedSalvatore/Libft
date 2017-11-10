#include <stdio.h>
#include "libft.h"
#include <stdlib.h>

int		main (int ac, char **av)
{
	if (ac == 2)
	{
		size_t n = (size_t)(atoi(av[1]));
		char *dst1 = malloc(sizeof(char) * n + 1);
		char *dst2 = malloc(sizeof(char) * n + 1);

		dst1[n] = '\0';
		dst2[n] = '\0';
		ft_memset(dst1, 48, n);
		ft_memset(dst2, 48, n);
		printf("Before bzero	dest1 = %s\n", dst1);
		bzero(dst1, n);
		printf("After  bzero	dest1 = %s\n\n", dst1);
		printf("Before ft_bzero	dest2 = %s\n", dst2);
		ft_bzero(dst2, n);
		printf("After  ft_bzero	dest2 = %s\n", dst2);
		free(dst1);
		free(dst2);
	}
	return (0);
}
