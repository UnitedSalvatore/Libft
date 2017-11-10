#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

int	main(int ac, char **av)
{
	if (ac == 3)
	{
		size_t size = ft_strlen(av[1]);
		size_t n = (size_t)atoi(av[2]);
		char *dst1 = malloc(sizeof(char) * (size + 1));
		char *dst2 = malloc(sizeof(char) * (size + 1));

		dst1[size] = '\0';
		dst2[size] = '\0';
		ft_memset(dst1, 48, size);
		ft_memset(dst2, 48, size);
		printf("size src: %lu\n", size);
		printf("Before	strncpy: dst1: %s, src: %s\n", dst1, av[1]);
		strncpy(dst1, av[1], n);
		printf("After	strncpy: dst1: %s, src: %s, n: %lu\n\n", dst1, av[1], n);
		printf("Before	ft_strncpy: dst2: %s, src: %s\n", dst2, av[1]);
		ft_strncpy(dst2, av[1], n);
		printf("After	ft_strncpy: dst2: %s, src: %s, n: %lu\n", dst2, av[1], n);
		free(dst1);
		free(dst2);
	}
	return (0);
}
