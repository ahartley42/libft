/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahartley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 10:42:53 by ahartley          #+#    #+#             */
/*   Updated: 2019/05/30 12:37:51 by ahartley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	int		i;
	char	*ans;

	i = 0;
	ans = (char *)malloc(size);
	while (size > 0)
	{
		ans[i] = 0;
		i++;
		size--;
	}
	return ((void *)ans);
}
