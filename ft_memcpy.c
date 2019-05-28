/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahartley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 13:51:10 by ahartley          #+#    #+#             */
/*   Updated: 2019/05/28 09:38:43 by ahartley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	int			i;
	const char	*go;
	char		*end;

	i = 0;
	go = (const char *)src;
	end = (char *)dst;
	while (n > i * sizeof(char))
	{
		end[i] = go[i];
		i++;
	}
	return ((void *)end);
}
