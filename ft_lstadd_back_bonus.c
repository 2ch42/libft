/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: changhyl <changhyl@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 11:29:55 by changhyl          #+#    #+#             */
/*   Updated: 2022/11/28 19:25:23 by changhyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*ptr1;

	if (lst == NULL || new == NULL)
		return ;
	ptr1 = *lst;
	if (ptr1 == NULL)
	{
		*lst = new;
		return ;
	}
	while (ptr1->next != NULL)
		ptr1 = ptr1->next;
	ptr1->next = new;
}
