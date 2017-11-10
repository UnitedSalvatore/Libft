#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		size_t n = ft_strlen(av[1]);
		char *dst1 = malloc(sizeof(char) * (n + 1));
		char *dst2 = malloc(sizeof(char) * (n + 1));

		ft_memset(dst1, 48, n);
		ft_memset(dst2, 48, n);
		printf("size src: %lu\n", n);
		printf("Before    strcpy: dst1: %s, src: %s\n", dst1, av[1]);
		strcpy(dst1, av[1]);
		printf("After     strcpy: dst1: %s, src: %s\n", dst1, av[1]);
		printf("Before ft_strcpy: dst2: %s, src: %s\n", dst2, av[1]);
		ft_strcpy(dst2, av[1]);
		printf("After  ft_strcpy: dst2: %s, src: %s\n", dst2, av[1]);
		free(dst1);
		free(dst2);
	}
	return (0);
}
