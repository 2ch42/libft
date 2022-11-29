/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: changhyl <changhyl@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 18:10:11 by changhyl          #+#    #+#             */
/*   Updated: 2022/11/22 17:49:24 by changhyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	src_idx;
	size_t	dst_len;
	size_t	src_len;

	src_idx = 0;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dst_len >= dstsize)
	{
		return (src_len + dstsize);
	}
	while (dst_len + src_idx < dstsize - 1 && *(src + src_idx))
	{
		*(dst + dst_len + src_idx) = *(src + src_idx);
		src_idx++;
	}
	*(dst + dst_len + src_idx) = '\0';
	return (dst_len + src_len);
}
