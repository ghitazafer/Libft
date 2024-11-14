/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gzafer <gzafer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 13:01:29 by gzafer            #+#    #+#             */
/*   Updated: 2024/11/14 08:43:16 by gzafer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	long	cnt;
	long	sz;
	long	ts;

	cnt = (long)count;
	sz = (long)size;
	ts = sz * cnt;
	if (cnt < 0 && sz < 0)
		return (NULL);
	ptr = malloc(ts);
	if (!ptr)
	{
		return (NULL);
	}
	ft_bzero(ptr, ts);
	return (ptr);
}
