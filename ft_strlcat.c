/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahartley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 08:59:01 by ahartley          #+#    #+#             */
/*   Updated: 2019/05/29 12:57:13 by ahartley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dst[i] && i < (int)dstsize)
		i++;
	while (src[j] && ((i + j + 1) < (int)dstsize))
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i < (int)dstsize)
		dst[i + j] = '\0';
	return (i + ft_strlen(src));
}
