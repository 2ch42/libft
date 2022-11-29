/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: changhyl <changhyl@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 16:28:22 by changhyl          #+#    #+#             */
/*   Updated: 2022/11/27 16:47:06 by changhyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (*(s + i))
		i++;
	while (i >= 0)
	{
		if (*(s + i) == (char)c)
			return ((char *)(s + i));
		else
			i--;
	}
	return (NULL);
}
