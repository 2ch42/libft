/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: changhyl <changhyl@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 22:04:27 by changhyl          #+#    #+#             */
/*   Updated: 2022/11/29 16:18:22 by changhyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_word(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (*(s + i))
	{
		if (*(s + i) && *(s + i) != c)
		{
			while (*(s + i) && *(s + i) != c)
				i++;
			count++;
		}
		else
			i++;
	}
	return (count);
}

static void	word_alloc(char const *s, char **ret_str, char c)
{
	int	i;
	int	word_len;
	int	word_idx;

	i = 0;
	word_idx = 0;
	while (*(s + i))
	{
		if (*(s + i) && *(s + i) != c)
		{
			word_len = 0;
			while (*(s + i) && *(s + i) != c)
			{
				word_len++;
				i++;
			}
			ret_str[word_idx] = (char *)malloc(sizeof(char) * (word_len + 1));
			if (!(ret_str[word_idx]))
				return ;
			ret_str[word_idx][word_len] = '\0';
			word_idx++;
		}
		else
			i++;
	}
}

void	word_write(char const *s, char **ret_str, char c)
{
	int	i;
	int	word_len;
	int	word_idx;

	i = 0;
	word_idx = 0;
	while (*(s + i))
	{
		if (*(s + i) && *(s + i) != c)
		{
			word_len = 0;
			while (*(s + i) && *(s + i) != c)
			{
				ret_str[word_idx][word_len] = *(s + i);
				word_len++;
				i++;
			}
			word_idx++;
		}
		else
			i++;
	}
}

void	split_free(char **ret_str, int idx)
{
	int	i;

	i = 0;
	while (i <= idx)
	{
		free(*(ret_str + i));
		i++;
	}
}

char	**ft_split(char const *s, char c)
{
	char	**ret_str;
	int		i;

	ret_str = (char **)malloc(sizeof(char *) * (count_word(s, c) + 1));
	if (ret_str == NULL)
	{
		free(ret_str);
		return (NULL);
	}
	*(ret_str + count_word(s, c)) = 0;
	word_alloc(s, ret_str, c);
	i = 0;
	while (i < count_word(s, c))
	{
		if (*(ret_str + i) == NULL)
		{
			split_free(ret_str, i);
			free(ret_str);
			return (NULL);
		}
		i++;
	}
	word_write(s, ret_str, c);
	return (ret_str);
}
