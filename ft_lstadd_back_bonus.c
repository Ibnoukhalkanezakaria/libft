/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zibnoukh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 17:59:52 by zibnoukh          #+#    #+#             */
/*   Updated: 2023/11/17 17:57:01 by zibnoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*newlst;

	newlst = *lst;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	while (newlst->next != NULL)
	{
		newlst = newlst->next;
	}
	newlst->next = new;
}
