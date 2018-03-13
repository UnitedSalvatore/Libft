/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_splitdel.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <ypikul@student.unit.ua>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/13 17:38:40 by ypikul            #+#    #+#             */
/*   Updated: 2018/03/13 20:53:00 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

int	main(int argc, char const *argv[])
{
	char **split;

	while (argc == 3)
	{
		split = ft_strsplit(argv[1], *(argv[2]));
		ft_printf("%p\n", split);
		ft_splitdel(&split);
		ft_printf("%p\n", split);
	}
	return (0);
}
