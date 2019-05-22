/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahartley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 08:59:01 by ahartley          #+#    #+#             */
/*   Updated: 2019/05/22 15:19:33 by ahartley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_strlen(const char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return (i * sizeof(char));
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int i;
	int j;
	int new_size;

	i = 0;
	j = 0;
	new_size = dstsize - ft_strlen(dst[i]) - 1;
	while (dst[i])
		i++;
	while (src[j])
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = '\0';
	return (ft_strlen(dst));
}

int main()
{
	char a[4] = "FAT";
	const char b[4] = "CAT";

	printf("%lu", ft_strlcat(a, b, 0));
	return (0);
}
