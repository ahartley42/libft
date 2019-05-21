/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahartley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 14:25:27 by ahartley          #+#    #+#             */
/*   Updated: 2019/05/21 15:18:40 by ahartley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	int i;

	i = 0;
	while ((len > 0) && (src[i]))
	{
		dst[i] = src[i];
		i++;
		len--;
	}
	while (len > 0)
	{
		dst[i] = '\0';
		len--;
	}
	return (dst);
}
