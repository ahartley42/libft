/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahartley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 12:40:13 by ahartley          #+#    #+#             */
/*   Updated: 2019/05/30 12:49:50 by ahartley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*ans;

	i = 0;
	ans = (char *)ft_memalloc(sizeof(s));
	while (s[i])
	{
		ans[i] = f(s[i]);
		i++;
	}
	return (ans);
}
