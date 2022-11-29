/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: changhyl <changhyl@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 16:27:28 by changhyl          #+#    #+#             */
/*   Updated: 2022/11/27 17:03:07 by changhyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	key;

	i = 0;
	key = (char)c;
	while (*(s + i))
	{
		if (*(s + i) == key)
			return ((char *)(s + i));
		else
			i++;
	}
	if (key == '\0')
		return ((char *)(s + i));
	return (NULL);
}
