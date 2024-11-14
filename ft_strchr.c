/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gzafer <gzafer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 10:16:20 by gzafer            #+#    #+#             */
/*   Updated: 2024/11/11 14:35:33 by gzafer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	cr;

	cr = (char)c;
	if (cr == '\0')
	{
		return ((char *)&s[ft_strlen(s)]);
	}
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == cr)
		{
			return ((char *)&s[i]);
		}
		i++;
	}
	return (NULL);
}
