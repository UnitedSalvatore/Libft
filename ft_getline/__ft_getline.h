/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   __ft_getline.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <ypikul@student.unit.ua>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/01 04:42:26 by ypikul            #+#    #+#             */
/*   Updated: 2018/03/01 04:49:45 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FT_GETLINE_H
# define __FT_GETLINE_H

# include <string.h>

# define BUFF_SIZE 64
# define MALLCHECK(ptr) if (!ptr) return (-1)

typedef struct		s_lst_fd
{
	int				fd;
	size_t			size;
	char			*content;
	struct s_lst_fd	*next;
}					t_lst_fd;

#endif
