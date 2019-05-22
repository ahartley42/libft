/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahartley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 11:31:01 by ahartley          #+#    #+#             */
/*   Updated: 2019/05/22 11:45:26 by ahartley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int i;

	i = 0;
	while ((s1[i] == s2[i]) && s1[i] && (n > 0))
	{
		i++;
		n--;
	}
	if (n <= 0)
		return (NULL);
	else if (s1[i] > s2[i])
		return (1);
	else if (s1[i] < s2[i])
		return (-1);
	return (0);
}
