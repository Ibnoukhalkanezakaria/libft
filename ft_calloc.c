/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zibnoukh <zibnoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 09:48:07 by zibnoukh          #+#    #+#             */
/*   Updated: 2023/11/26 11:11:18 by zibnoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	totalsize;
	void	*ptr;

	totalsize = nmemb * size;
	if (size && totalsize / size != nmemb)
		return (NULL);
	ptr = malloc(totalsize);
	if (ptr != NULL)
		ft_memset(ptr, 0, totalsize);
	else
		return (NULL);
	return (ptr);
}
