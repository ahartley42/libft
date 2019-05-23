/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahartley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 14:39:14 by ahartley          #+#    #+#             */
/*   Updated: 2019/05/23 14:54:59 by ahartley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	f(char c)
{
	c = c + 13;
}

void	ft_striter(char *s, void(*f)(char *))
{
	while (s)
	{
		s = f(s);
		s++;
	}
}

int main()
{
	char test[] = "abcdefghijklm";
	printf("%s\n", test);
	printf("%s", ft_striter(test, f(test)));
}
