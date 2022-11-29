/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: changhyl <changhyl@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 20:23:32 by changhyl          #+#    #+#             */
/*   Updated: 2022/11/27 18:48:06 by changhyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	needle_len;

	i = 0;
	needle_len = ft_strlen(needle);
	if (!needle || needle_len == 0)
		return ((char *)haystack);
	while (*(haystack + i) && i < len)
	{
		if (*(haystack + i) == *needle)
		{
			j = 0;
			while (j < needle_len && (*(haystack + i + j) == *(needle + j))
				&& *(haystack + i + j) && i + j < len)
				j++;
			if (j == needle_len)
				return ((char *)(haystack + i));
		}
		i++;
	}
	return (NULL);
}
