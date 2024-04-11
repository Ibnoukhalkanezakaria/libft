/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zibnoukh <zibnoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 11:44:43 by zibnoukh          #+#    #+#             */
/*   Updated: 2023/11/26 13:27:32 by zibnoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*return_result(char *result, size_t result_len)
{
	result[result_len] = '\0';
	return (result);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	result_len;
	size_t	i;
	char	*result;

	start = 0;
	i = 0;
	if (s1 == NULL || set == NULL)
		return (NULL);
	while (s1[start] && ft_strchr(set, s1[start]) != 0)
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_strchr(set, s1[end - 1]) != 0)
		end--;
	result_len = end - start;
	result = (char *)malloc(result_len + 1);
	if (result == NULL)
		return (NULL);
	while (i < result_len)
	{
		result[i] = s1[start + i];
		i++;
	}
	return (return_result(result, result_len));
}
