/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: changhyl <changhyl@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 14:15:11 by changhyl          #+#    #+#             */
/*   Updated: 2022/11/28 17:25:58 by changhyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*ptr;

	if (lst == NULL)
		return ;
	while (lst != NULL)
	{
		ptr = lst;
		lst = lst->next;
		f(ptr -> content);
	}
}
