#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

int	main(int ac, char **av)
{
	if (ac == 4)
	{
		size_t n = (size_t)atoi(av[3]);
		size_t size = ft_strlen(av[1]) + n;
		char *dst1 = malloc(sizeof(char) * (size + 1));
		char *dst2 = malloc(sizeof(char) * (size + 1));

		ft_strcpy(dst1, av[1]);
		ft_strcpy(dst2, av[1]);
		printf("size src: %lu, n: %lu\n", size, n);
		printf("Before	strncat: dst1: %s, src: %s\n", dst1, av[2]);
		strncat(dst1, av[2], n);
		printf("After	strncat: dst1: %s, src: %s\n\n", dst1, av[2]);
		printf("Before	ft_strncat: dst2: %s, src: %s\n", dst2, av[2]);
		ft_strncat(dst2, av[2], n);
		printf("After	ft_strncat: dst2: %s, src: %s\n", dst2, av[2]);
		free(dst1);
		free(dst2);
	}
	return (0);
}
