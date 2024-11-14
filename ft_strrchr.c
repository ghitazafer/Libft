/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gzafer <gzafer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 10:14:46 by gzafer            #+#    #+#             */
/*   Updated: 2024/11/13 08:49:21 by gzafer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	cr;

	cr = (char)c;
	i = ft_strlen(s);
	if (cr == '\0')
	{
		return ((char *)&s[i]);
	}
	while (i >= 0)
	{
		if (s[i] == (char)cr)
		{
			return ((char *)&s[i]);
		}
		i--;
	}
	return (NULL);
}
