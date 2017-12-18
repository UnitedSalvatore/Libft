/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <ypikul@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/18 16:47:31 by ypikul            #+#    #+#             */
/*   Updated: 2017/12/18 17:31:28 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

int		main(int ac, char **av)
{
	char *str;

	if (ac == 3)
	{
		str = ft_itoa_base(ft_atoi(av[1]), ft_atoi(av[2]));
		printf("ft_itoa_base: |%s|\n", str);
		ft_strdel(&str);
	}
	return (0);
}
