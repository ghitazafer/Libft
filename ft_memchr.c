/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gzafer <gzafer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 12:06:20 by gzafer            #+#    #+#             */
/*   Updated: 2024/11/11 14:24:12 by gzafer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	char				*str;

	str = (char *)s;
	i = 0;
	if (n == 0)
	{
		return (NULL);
	}
	while (i < n)
	{
		if (str[i] == (char)c)
		{
			return ((void *)&str[i]);
		}
		i++;
	}
	return (NULL);
}
