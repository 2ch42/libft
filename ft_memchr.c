/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: changhyl <changhyl@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 16:26:57 by changhyl          #+#    #+#             */
/*   Updated: 2022/11/27 16:42:09 by changhyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	key;
	size_t			i;

	str = (unsigned char *)s;
	key = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (*(str + i) == key)
			return ((void *)(str + i));
		i++;
	}
	return (NULL);
}
