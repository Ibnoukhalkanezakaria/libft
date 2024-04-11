/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zibnoukh <zibnoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 15:48:36 by zibnoukh          #+#    #+#             */
/*   Updated: 2023/11/25 09:42:18 by zibnoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	const unsigned char	*news1;
	const unsigned char	*news2;

	news1 = (unsigned char *)s1;
	news2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (*news1 != '\0' && *news2 != '\0' && *news1 == *news2 && n > 1)
	{
		news1++;
		news2++;
		n--;
	}
	return (*news1 - *news2);
}
