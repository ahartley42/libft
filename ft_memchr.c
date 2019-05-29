/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahartley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 11:06:00 by ahartley          #+#    #+#             */
/*   Updated: 2019/05/29 12:05:15 by ahartley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int				i;
	int				j;
	unsigned char	u;
	char			*ans;

	i = 0;
	j = 0;
	u = (unsigned char)c;
	ans = (char *)s;
	while (j < (int)n - 1)
	{
		if ((unsigned char)ans[i] == u)
			return ((void *)&ans[i]);
		i++;
		j++;
	}
	if (c < 0)
		return ((void *)&ans[i + 1]);
	return (NULL);
}
