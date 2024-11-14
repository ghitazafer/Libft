/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gzafer <gzafer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 10:17:36 by gzafer            #+#    #+#             */
/*   Updated: 2024/11/11 14:27:17 by gzafer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*p;
	char	*k;
	size_t	i;

	i = 0;
	p = (char *)dst;
	k = (char *)src;
	if (!dst && !src)
	{
		return (NULL);
	}
	while (i < n)
	{
		p[i] = k[i];
		i++;
	}
	return (dst);
}
