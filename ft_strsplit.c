/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahartley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 09:52:47 by ahartley          #+#    #+#             */
/*   Updated: 2019/06/04 13:00:52 by ahartley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wordcount(const char *s, char c)
{
	int	i;
	int	ans;

	i = 0;
	ans = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
			ans++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (ans);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**ans;
	int		i;
	int		j;
	int		k;

	ans = (char **)malloc(sizeof(*ans) * ft_wordcount(s, c) + 1);
	i = 0;
	j = 0;
	while (j < ft_wordcount(s, c))
	{
		k = 0;
		while (s[i] == c)
			i++;
		while (s[i] && s[i] != c)
		{
			i++;
			k++;
		}
		ans[j] = (char *)malloc(sizeof(char) * k + 1);
		ft_strncpy(ans[j], &s[i - k], k);
		j++;
	}
	ans[j] = 0;
	return (ans);
}
