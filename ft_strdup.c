/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: changhyl <changhyl@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 16:27:40 by changhyl          #+#    #+#             */
/*   Updated: 2022/11/22 17:49:15 by changhyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		len;
	int		i;
	char	*str;

	len = ft_strlen(s1);
	str = (char *)malloc(sizeof(char) * (len + 1));
	i = 0;
	if (!str)
		return (NULL);
	while (*(s1 + i))
	{
		*(str + i) = *(s1 + i);
		i++;
	}
	*(str + i) = '\0';
	return (str);
}
