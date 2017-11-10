/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_word_len.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/29 18:52:19 by ypikul            #+#    #+#             */
/*   Updated: 2017/10/29 19:14:45 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_word_len(char const *s, char c)
{
	size_t len;

	if (s == NULL || c == '\0')
		return (0);
	len = 0;
	while (ft_is_whitespace(*s))
		s++;
	while (*s != c && *s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
