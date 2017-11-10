#include "libft.h"
#include <unistd.h>

int		main(int ac, char **av)
{
	char *str;

	if (ac == 2)
	{
		str = NULL;
		str = ft_strnew((size_t)ft_atoi(av[1]));
		if (str != NULL)
			write(1, "Done\n", 5);
		else
			write(1, "Fail\n", 5);
	}
	return (0);
}
