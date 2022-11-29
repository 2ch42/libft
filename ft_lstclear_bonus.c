/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: changhyl <changhyl@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 12:01:18 by changhyl          #+#    #+#             */
/*   Updated: 2022/11/26 12:01:24 by changhyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*ptr1;
	t_list	*ptr2;

	if (lst == NULL || *lst == NULL)
		return ;
	ptr1 = *lst;
	while (ptr1 != NULL)
	{
		ptr2 = ptr1;
		ptr1 = ptr2->next;
		del(ptr2->content);
		ptr2->next = NULL;
		free(ptr2);
		*lst = ptr1;
	}
}
