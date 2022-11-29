/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: changhyl <changhyl@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 20:53:01 by changhyl          #+#    #+#             */
/*   Updated: 2022/11/27 19:27:57 by changhyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ret_str;
	size_t	s1_len;
	size_t	s2_len;
	size_t	i;
	size_t	j;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	ret_str = (char *)malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (!ret_str)
		return (NULL);
	i = 0;
	j = 0;
	while (i < s1_len)
	{
		*(ret_str + i) = *(s1 + i);
		i++;
	}
	while (j < s2_len)
	{
		*(ret_str + s1_len + j) = *(s2 + j);
		j++;
	}
	*(ret_str + s1_len + s2_len) = '\0';
	return (ret_str);
}
