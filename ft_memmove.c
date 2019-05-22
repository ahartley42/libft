/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahartley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 12:44:57 by ahartley          #+#    #+#             */
/*   Updated: 2019/05/22 13:50:37 by ahartley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int i;

	i = 0;
	while (len - sizeof(src[i]) > 0)
	{
		dst[i] = src[i];
		i++;
		len = len - sizeof(src[i]);
	}
	return (dst);
}
