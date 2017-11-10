#include <stdio.h>
#include "libft.h"

int		main (void)
{
	char str1[] = "memmove can be very useful......";
	char str2[] = "memmove can be very useful......";

	printf("Before	memmove		str1 = %s\n", str1);
	memmove(str1 + 20, str1 + 15, 11);
	printf("After	memmove		str1 = %s\n\n", str1);
	printf("Before	ft_memmove	str2 = %s\n", str2);
	ft_memmove(str2 + 20, str2 + 15, 11);
	printf("After	ft_memmove	str2 = %s\n", str2);
	return (0);
}
