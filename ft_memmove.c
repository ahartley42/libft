/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahartley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 12:44:57 by ahartley          #+#    #+#             */
/*   Updated: 2019/06/07 10:11:13 by ahartley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*temp;

	if (!(temp = (char *)malloc(len)))
		return (NULL);
	ft_memcpy(temp, src, len);
	ft_memcpy(dst, temp, len);
	free(temp);
	return (dst);
}

/*
** temp created as a temporary moving space
** NULL is returned if malloc fails
** len bytes of src is copied over to temp
** len bytes of temp is copied over to dst
** temp is then freed before the new dst is returned
*/
