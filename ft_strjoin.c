/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahartley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 16:08:35 by ahartley          #+#    #+#             */
/*   Updated: 2019/05/30 16:22:38 by ahartley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ans;
	size_t	len;
	int		i;
	int		j;

	i = 0;
	j = 0;
	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	ans = (char *)ft_memalloc(len);
	while (s1[i])
	{
		ans[i] = s1[i];
		i++;
	}
	while (i + j < (int)len)
	{
		ans[i + j] = s2[j];
		j++;
	}
	ans[i + j] = '\0';
	return (ans);
}
