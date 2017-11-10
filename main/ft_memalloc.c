#include "libft.h"
#include <unistd.h>
#include <stdlib.h>

int		main(int ac, char **av)
{
	void *ptr;

	while (ac == 2)
	{
		ptr = NULL;
		ptr = ft_memalloc((size_t)ft_atoi(av[1]));
		if (ptr != NULL)
		{
			write(1, "Done\n", 5);
			free(ptr);
		}
		else
			write(1, "Fail\n", 5);
	}
	return (0);
}
