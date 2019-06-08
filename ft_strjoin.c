/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahartley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 16:08:35 by ahartley          #+#    #+#             */
/*   Updated: 2019/06/08 16:15:52 by ahartley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ans;

	if (!(ans = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1)))
		return (NULL);
	ans = ft_strcpy(ans, s1);
	ans = ft_strcat(ans, s2);
	return (ans);
}

/*
** malloc creates space for ans
** s1 is copied onto ans
** s2 is concacenated with ans (which holds s1)
*/
