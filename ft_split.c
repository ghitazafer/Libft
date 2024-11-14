/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gzafer <gzafer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 13:02:20 by gzafer            #+#    #+#             */
/*   Updated: 2024/11/12 15:35:37 by gzafer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] != c)
		{
			count++;
			while (str[i] != '\0' && str[i] != c)
			{
				i++;
			}
			if (str[i] == '\0')
			{
				return (count);
			}
		}
		i++;
	}
	return (count);
}

static void	ft_strcpy(char *word, char *str, char c, int j)
{
	int	i;

	i = 0;
	while (str[j] != '\0' && str[j] == c)
		j++;
	while (str[j + i] != c && str[j + i] != '\0')
	{
		word[i] = str[j + i];
		i++;
	}
	word[i] = '\0';
}

static char	*ft_stralloc(char *str, char c, int *k)
{
	char	*word;
	int		j;
	int		len;

	j = *k;
	len = 0;
	while (str[*k] != '\0' && str[*k] != c)
	{
		len++;
		(*k)++;
	}
	word = (char *)malloc(sizeof(char) * (len + 1));
	if (word == NULL)
		return (NULL);
	ft_strcpy(word, str, c, j);
	return (word);
}

static void	ft_freeup(char **strs, int i)
{
	while (i > 0)
	{
		free(strs[i - 1]);
		i--;
	}
	free(strs);
}

char	**ft_split(char const *str, char c)
{
	char	**strs;
	int		i;
	int		pos;

	if (str == NULL)
		return (NULL);
	i = 0;
	strs = (char **)malloc(sizeof(char *) * (count_words((char *)str, c) + 1));
	if (strs == NULL)
		return (NULL);
	strs[count_words((char *)str, c)] = NULL;
	pos = 0;
	while (i < count_words((char *)str, c))
	{
		while (str[pos] != '\0' && str[pos] == c)
			pos++;
		strs[i] = ft_stralloc(((char *)str), c, &pos);
		if (strs[i] == NULL)
		{
			ft_freeup(strs, i);
			return (NULL);
		}
		i++;
	}
	return (strs);
}
