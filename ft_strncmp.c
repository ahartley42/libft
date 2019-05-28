/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahartley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 12:22:35 by ahartley          #+#    #+#             */
/*   Updated: 2019/05/28 15:43:08 by ahartley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int				i;
	int				t;
	unsigned char	*p1;
	unsigned char	*p2;

	i = 0;
	t = (int)n - 1;
	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	while ((p1[i] == p2[i]) && (p1[i]) && (i < t))
		i++;
	if (n == 0)
		return (0);
	if (p2[i] < p1[i])
		return (1);
	if (p2[i] > p1[i])
		return (-1);
	return (0);
}
