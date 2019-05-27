/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahartley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 08:38:50 by ahartley          #+#    #+#             */
/*   Updated: 2019/05/27 09:04:27 by ahartley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	int i;

	i = 0;
	while ((s1[i]) && (n > 1))
	{
		if (s1[i] == s2[i])
		{
			i++;
			n--;
		}
		else
			break ;
	}
	if (s1[i] == s2[i] || n == 0)
		return (1);
	else
		return (0);
}
