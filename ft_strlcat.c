/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahartley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 08:59:01 by ahartley          #+#    #+#             */
/*   Updated: 2019/05/22 10:50:19 by ahartley         ###   ########.fr       */
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
	char *ans;

	i = 0;
	j = 0;
	while (dst[i])
		i++;
	while ((src[j]) && (dstsize > 0))
	{
		dst[i + j] = src[j];
		j++;
		dstsize--;
	}
	dst[i + j] = '\0';
	return (ft_strlen(ans));
}

int main()
{
	char a[4] = "FAT";
	const char b[4] = "CAT";

	printf("%lu", ft_strlcat(a, b, 0));
	return (0);
}
