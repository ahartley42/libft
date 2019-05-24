/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahartley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 14:25:27 by ahartley          #+#    #+#             */
/*   Updated: 2019/05/24 15:41:53 by ahartley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	int i;

	i = 0;
	while ((sizeof(src[i]) <= len) && (src[i]))
	{
		dst[i] = src[i];
		i++;
		len = len - sizeof(src[i]);
	}
	while ((int)len > 0)
	{
		dst[i] = '\0';
		len--;
	}
	return (dst);
}
