/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: changhyl <changhyl@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 21:12:24 by changhyl          #+#    #+#             */
/*   Updated: 2022/11/27 21:33:30 by changhyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_in_set(char c, char const *set)
{
	int	i;

	i = 0;
	while (*(set + i))
	{
		if (c == *(set + i))
			return (1);
		i++;
	}
	return (0);
}

static char	*trim_allocate(char const *s1, char const *set, int *len)
{
	int		i;
	int		j;
	char	*ret_str;

	i = 0;
	j = ft_strlen(s1) - 1;
	*len = ft_strlen(s1);
	while (*(s1 + i) && check_in_set(*(s1 + i), set) == 1)
	{
		*len -= 1;
		i++;
	}
	while (j >= i && check_in_set(*(s1 + j), set) == 1)
	{
		*len -= 1;
		j--;
	}
	ret_str = (char *)malloc(sizeof(char) * (*len + 1));
	return (ret_str);
}

static void	trim_write(char const *s1, char const *set, char *ret_str, int len)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < (int)ft_strlen(s1) && check_in_set(*(s1 + i), set) == 1)
		i++;
	while (j < len)
	{
		*(ret_str + j) = *(s1 + i + j);
		j++;
	}
	*(ret_str + j) = '\0';
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		len;
	char	*ret_str;

	len = 0;
	ret_str = trim_allocate(s1, set, &len);
	if (!ret_str)
		return (NULL);
	trim_write(s1, set, ret_str, len);
	return (ret_str);
}
