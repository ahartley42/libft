/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahartley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 10:43:48 by ahartley          #+#    #+#             */
/*   Updated: 2019/05/21 11:02:09 by ahartley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strstr(const char *whole, const char *part)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (whole[i])
	{
		while (part[j] == whole[i])
		{
			i++;
			j++;
		}
		i = i - j;
		if (part[j] == '\0')
			return ((char *)&whole[i]);
		else
			j = 0;
		i++;
	}
	return (NULL);
}
