/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: changhyl <changhyl@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 16:26:01 by changhyl          #+#    #+#             */
/*   Updated: 2022/11/22 17:47:16 by changhyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ret_val;

	ret_val = malloc(count * size);
	if (!ret_val)
		return (NULL);
	ft_bzero(ret_val, count * size);
	return (ret_val);
}
