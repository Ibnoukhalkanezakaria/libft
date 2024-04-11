/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zibnoukh <zibnoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 17:51:41 by zibnoukh          #+#    #+#             */
/*   Updated: 2023/11/24 13:41:18 by zibnoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long long int	number;
	long long int	newnumber;
	int				one;

	number = n;
	one = 1;
	if (number < 0)
	{
		ft_putchar_fd('-', fd);
		number *= -1;
	}
	while (number / one >= 10)
	{
		one *= 10;
	}
	while (one > 0)
	{
		newnumber = number / one;
		ft_putchar_fd(newnumber + 48, fd);
		number %= one;
		one /= 10;
	}
}
