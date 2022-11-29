/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: changhyl <changhyl@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 16:43:16 by changhyl          #+#    #+#             */
/*   Updated: 2022/11/26 15:55:48 by changhyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	len;
	char			*ret_str;

	i = 0;
	len = 0;
	while (*(s + len))
	{
		len++;
	}
	ret_str = (char *)malloc(sizeof(char) * (len + 1));
	if (!ret_str)
		return (NULL);
	while (*(s + i))
	{
		*(ret_str + i) = f(i, *(s + i));
		i++;
	}
	*(ret_str + i) = '\0';
	return (ret_str);
}
