#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	if (ac == 4)
	{
		size_t	size = ft_strlen(av[1]);
		char	*dst1 = malloc(sizeof(char) * (size + 1));
		char	*dst2 = malloc(sizeof(char) * (size + 1));
		int		c = atoi(av[2]);
		size_t	n = (size_t)atoi(av[3]);

		ft_memset(dst1, 48, size);
		ft_memset(dst2, 48, size);
		dst1[size] = '\0';
		dst2[size] = '\0';
		printf("size src: %lu\n", size);
		printf("Before	memccpy:	dst1: %s, src: %s\n", dst1, av[1]);
		memccpy(dst1, av[1], c, n);
		printf("After	memccpy:	dst1: %s, src: %s\n", dst1, av[1]);
		printf("Before	ft_memccpy:	dst2: %s, src: %s\n", dst2, av[1]);
		ft_memccpy(dst2, av[1], c, n);
		printf("After	ft_memccpy:	dst2: %s, src: %s\n", dst2, av[1]);
		free(dst1);
		free(dst2);
		}
	return (0);
}
