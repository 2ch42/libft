/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: changhyl <changhyl@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 12:07:44 by changhyl          #+#    #+#             */
/*   Updated: 2022/11/29 20:11:52 by changhyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstmap2(t_list *lst, t_list *ret_list, void*(f)(void *),
		void (*del)(void *))
{
	t_list	*ptr;

	while (lst != NULL)
	{
		ptr = (t_list *)malloc(sizeof(t_list));
		if (ptr == NULL)
		{
			ft_lstdelone(ptr, del);
			ft_lstclear(&ret_list, del);
			return (-1);
		}
		ptr->next = NULL;
		ptr->content = f(lst->content);
		ft_lstadd_back(&ret_list, ptr);
		lst = lst->next;
	}
	return (1);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ret_list;
	int		i;

	if (lst == NULL)
		return (NULL);
	ret_list = (t_list *)malloc(sizeof(t_list) * ft_lstsize(lst));
	if (!ret_list)
	{
		free(ret_list);
		return (NULL);
	}
	ret_list->content = f(lst->content);
	ret_list->next = NULL;
	lst = lst->next;
	i = ft_lstmap2(lst, ret_list, f, del);
	if (i == -1)
		return (NULL);
	return (ret_list);
}
