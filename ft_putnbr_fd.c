/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahartley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 09:21:49 by ahartley          #+#    #+#             */
/*   Updated: 2019/06/03 09:36:16 by ahartley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	i;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	i = n;
	if (i <= 9)
		ft_putchar_fd(i + '0', fd);
	else
	{
		ft_putnbr_fd(i / 10, fd);
		ft_putchar_fd('0' + (i % 10), fd);
	}
}
