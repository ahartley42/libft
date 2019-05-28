/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahartley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 11:07:24 by ahartley          #+#    #+#             */
/*   Updated: 2019/05/28 08:25:14 by ahartley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	u;
	char			*d;
	int				i;

	u = c;
	i = 0;
	d = (char *)b;
	while ((i * sizeof(char)) < len)
	{
		d[i] = u;
		i++;
	}
	return ((void *)d);
}
