/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahartley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 10:01:26 by ahartley          #+#    #+#             */
/*   Updated: 2019/05/30 16:23:40 by ahartley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*ans;
	int		j;

	i = ft_strlen(s) - start + 1;
	j = 0;
	ans = NULL;
	if (len < i)
	{
		ans = (char *)malloc(len + 1);
		while (j < (int)len)
		{
			ans[j] = s[start + j];
			j++;
		}
		ans[j] = '\0';
	}
	return (ans);
}
