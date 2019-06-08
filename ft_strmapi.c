/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahartley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 12:50:00 by ahartley          #+#    #+#             */
/*   Updated: 2019/06/08 11:45:22 by ahartley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*ans;

	i = 0;
	if (!(ans = (char *)ft_memalloc(sizeof(s))))
		return (NULL);
	while (s[i])
	{
		ans[i] = f(i, s[i]);
		i++;
	}
	return (ans);
}

/*
** similar to strmapi
** function passed has an extra param
*/
