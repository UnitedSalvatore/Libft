#include "libft.h"
#include <stdlib.h>
#include <stdio.h>
#include <bsd/string.h>

int	main(int ac, char **av)
{
	if (ac == 4)
	{
		size_t n = (size_t)atoi(av[3]);
		size_t size = ft_strlen(av[1]) + ft_strlen(av[2]) + 1;
		char *dst1 = malloc(sizeof(char) * size);
		char *dst2 = malloc(sizeof(char) * size);

		ft_strcpy(dst1, av[1]);
		ft_strcpy(dst2, av[1]);
		printf("size dst: %lu, n: %lu\n", size, n);
		printf("Before	strlcat: dst1: %s, src: %s\n", dst1, av[2]);
		printf("Tried to write: %lu\n", strlcat(dst1, av[2], n));
		printf("After	strlcat: dst1: %s, src: %s\n\n", dst1, av[2]);
		printf("Before	ft_strlcat: dst2: %s, src: %s\n", dst2, av[2]);
		printf("Tried to write: %lu\n", ft_strlcat(dst2, av[2], n));
		printf("After	ft_strlcat: dst2: %s, src: %s\n", dst2, av[2]);
		free(dst1);
		free(dst2);
	}
	return (0);
}
