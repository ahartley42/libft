/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahartley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 08:31:37 by ahartley          #+#    #+#             */
/*   Updated: 2019/06/08 11:53:43 by ahartley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strequ(char const *s1, char const *s2)
{
	if (ft_strcmp(s1, s2) == 0)
		return (1);
	return (0);
}

/*
** compares 2 strings
** 1 = exact match, 0 = difference
*/
