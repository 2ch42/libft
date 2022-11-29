/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: changhyl <changhyl@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 10:31:46 by changhyl          #+#    #+#             */
/*   Updated: 2022/11/26 10:43:05 by changhyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*ret_node;

	ret_node = (t_list *)malloc(sizeof(t_list));
	if (!ret_node)
		return (NULL);
	ret_node->content = content;
	ret_node->next = NULL;
	return (ret_node);
}
