/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahartley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 10:43:48 by ahartley          #+#    #+#             */
/*   Updated: 2019/06/10 10:34:27 by ahartley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (haystack[i])
	{
		while (needle[j] == haystack[i + j])
			j++;
		if (needle[j] == '\0')
			return ((char *)&haystack[i]);
		j = 0;
		i++;
	}
	return (NULL);
}

/*
** returns pointer at first string match
** i = haystack index
** j = needle index
** i + j = haystack index while iterating through needle
** if needle has not been iterated to completion, j is reset to 0
** NULL is returned if no string match is found
*/
