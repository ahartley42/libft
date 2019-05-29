/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahartley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 12:44:57 by ahartley          #+#    #+#             */
/*   Updated: 2019/05/29 12:02:30 by ahartley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*ans;

	ans = (char *)malloc(len);
	if (ans == NULL)
		return (NULL);
	ft_memcpy(ans, src, len);
	ft_memcpy(dst, ans, len);
	free(ans);
	return (dst);
}
