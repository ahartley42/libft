/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahartley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 09:31:58 by ahartley          #+#    #+#             */
/*   Updated: 2019/05/30 13:21:44 by ahartley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	int		i;
	char	*ans;

	i = 0;
	ans = (char *)malloc(size + 1);
	ft_bzero(ans, size + 1);
	return (ans);
}
