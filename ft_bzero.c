/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: changhyl <changhyl@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 16:22:48 by changhyl          #+#    #+#             */
/*   Updated: 2022/11/22 17:46:58 by changhyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned int	i;
	char			*str;

	if (n == 0)
		return ;
	i = 0;
	str = (char *)s;
	while (i < n)
	{
		*(str + i) = '\0';
		i++;
	}
}
