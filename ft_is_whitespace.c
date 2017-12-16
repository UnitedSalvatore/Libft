/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_whitespace.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/29 18:58:33 by ypikul            #+#    #+#             */
/*   Updated: 2017/10/29 19:27:39 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_whitespace(const char c)
{
	return ((c == ' ' || c == '\t' || c == '\n') ? 1 : 0);
}