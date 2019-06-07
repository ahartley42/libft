/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahartley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 13:51:10 by ahartley          #+#    #+#             */
/*   Updated: 2019/06/07 09:56:56 by ahartley         ###   ########.fr       */
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
	while (i < (int)n)
	{
		end[i] = go[i];
		i++;
	}
	return ((void *)end);
}

/*
** "go" represents the src which will "go" to the "end"
** "end" represents the dst where src will be copied
** char pointer casting done for void pointer assignment
** int casting done for int/size_t comparison
*/
