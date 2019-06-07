/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahartley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 13:56:15 by ahartley          #+#    #+#             */
/*   Updated: 2019/06/07 10:03:26 by ahartley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	int				i;
	const char		*go;
	char			*end;

	i = 0;
	go = (const char *)src;
	end = (char *)dst;
	while (i < (int)n && go[i] != (unsigned char)c)
	{
		end[i] = go[i];
		i++;
	}
	if (go[i] == (unsigned char)c)
	{
		end[i] = go[i];
		return ((void *)&end[i + 1]);
	}
	return (NULL);
}

/*
** "go" represents src, "end" represents dst
** char pointer casting done for void pointer conversion
** int casting done for int/size_t comparison
** original function takes 'c' as an unsigned char
** pointer to byte AFTER 'c' is returned, hence address of i + 1
*/
