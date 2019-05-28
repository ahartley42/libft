/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahartley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 13:56:15 by ahartley          #+#    #+#             */
/*   Updated: 2019/05/28 09:56:25 by ahartley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	int				i;
	const char		*go;
	char			*end;
	unsigned char	u;

	i = 0;
	go = (const char *)src;
	end = (char *)dst;
	u = c;
	while ((n > i * sizeof(char)) && go[i] != u)
	{
		end[i] = go[i];
		i++;
	}
	if (go[i] == u)
	{
		end[i] = go[i];
		return ((void *)&end[i + 1]);
	}
	else
		return (NULL);
}
