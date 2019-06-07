/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahartley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 11:06:30 by ahartley          #+#    #+#             */
/*   Updated: 2019/06/07 16:36:56 by ahartley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (haystack[i] && i < (int)len)
	{
		while (needle[j] == haystack[i + j] && i + j < (int)len)
			j++;
		if (needle[j] == '\0')
			return ((char *)&haystack[i]);
		else
			j = 0;
		i++;
	}
	return (NULL);
}

/*
** i = index of haystack
** j = index of needle
** i + j = index of haystack while iterating through needle
*/
