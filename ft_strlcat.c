/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zibnoukh <zibnoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:53:41 by zibnoukh          #+#    #+#             */
/*   Updated: 2023/11/25 11:23:45 by zibnoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	destlength;
	size_t	srclength;
	size_t	totalength;
	size_t	i;
	size_t	j;

	srclength = ft_strlen(src);
	if (!dst && src && !size)
		return (srclength);
	destlength = ft_strlen(dst);
	totalength = destlength + srclength;
	i = 0;
	j = 0;
	if (size <= destlength)
		return (srclength + size);
	while (dst[i] != '\0')
		i++;
	while (src[j] != '\0' && i < size - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (totalength);
}
