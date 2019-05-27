/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahartley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 11:06:09 by ahartley          #+#    #+#             */
/*   Updated: 2019/05/27 16:30:45 by ahartley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int		ft_make_positive(int n)
{
	if (n < 0)
		n = n * -1;
	return (n);
}

int					ft_itoa_counter(int n, int i)
{
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char				*ft_itoa(int n)
{
	int			i;
	int			z;
	char		*ans;

	i = 0;
	z = n;
	if (n <= 0)
		i++;
	(unsigned int)n = ft_make_positive(n);
	i = ft_itoa_counter(n, i);
	ans = (char *)malloc(i * sizeof(char) + 1);
	ans[i] = '\0';
	while (n != 0)
	{
		ans[i - 1] = (n % 10) + '0';
		n = n / 10;
		i--;
	}
	if (i == 1)
		ans[0] = '-';
	if (z == 0)
		ans[0] = '0';
	return (ans);
}
