/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <ypikul@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/16 18:21:10 by ypikul            #+#    #+#             */
/*   Updated: 2017/12/16 21:51:22 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int		main(int argc, char const *argv[])
{
	char *str;

	if (argc == 3)
	{
		str = ft_memjoin(argv[1], ft_strlen(argv[1]) - 1, \
			argv[2], (ft_strlen(argv[2]) - 1));
		printf("Argv[1] len: |%zu|\n", ft_strlen(argv[1]));
		printf("Argv[2] len: |%zu|\n", ft_strlen(argv[2]));
		printf("Joined argv[1] and argv[2]: |%s|\n", str);
	}
	return (0);
}
