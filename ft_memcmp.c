/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gzafer <gzafer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 10:17:44 by gzafer            #+#    #+#             */
/*   Updated: 2024/11/11 14:25:52 by gzafer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*p;
	unsigned char	*k;

	p = (unsigned char *)s1;
	k = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (p[i] != k[i])
		{
			return ((unsigned char)p[i] - (unsigned char)k[i]);
		}
		i++;
	}
	return (0);
}
