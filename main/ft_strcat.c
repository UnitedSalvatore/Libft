#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

int	main(int ac, char **av)
{
	if (ac == 3)
	{
		size_t size = ft_strlen(av[1]) + ft_strlen(av[2]);
		char *dst1 = malloc(sizeof(char) * (size + 1));
		char *dst2 = malloc(sizeof(char) * (size + 1));

		ft_strcpy(dst1, av[1]);
		ft_strcpy(dst2, av[1]);
		printf("size src: %lu\n", size);
		printf("Before	strcat: dst1: %s, src: %s\n", dst1, av[2]);
		strcat(dst1, av[2]);
		printf("After	strcat: dst1: %s, src: %s\n\n", dst1, av[2]);
		printf("Before	ft_strcat: dst2: %s, src: %s\n", dst2, av[2]);
		ft_strcat(dst2, av[2]);
		printf("After	ft_strcat: dst2: %s, src: %s\n", dst2, av[2]);
		free(dst1);
		free(dst2);
	}
	return (0);
}
