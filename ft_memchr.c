/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahartley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 11:06:00 by ahartley          #+#    #+#             */
/*   Updated: 2019/05/22 11:30:27 by ahartley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while ((s[i]) && j < n)
	{
		if ((unsigned char)c == s[i])
			return ((void *)&s[i]);
		i++;
		j++;
	}
	return (NULL);
}
