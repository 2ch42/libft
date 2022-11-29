/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: changhyl <changhyl@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 15:37:49 by changhyl          #+#    #+#             */
/*   Updated: 2022/11/27 14:54:07 by changhyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*s1;
	char	*s2;
	size_t	i;

	s1 = (char *)dst;
	s2 = (char *)src;
	if (s1 == s2)
		return (dst);
	i = 0;
	if (s1 > s2)
	{
		while (i < len)
		{
			*(s1 + len - i - 1) = *(s2 + len - i - 1);
			i++;
		}
		return (dst);
	}
	while (i < len)
	{
		*(s1 + i) = *(s2 + i);
		i++;
	}
	return (dst);
}
