/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gzafer <gzafer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 10:19:08 by gzafer            #+#    #+#             */
/*   Updated: 2024/11/12 15:02:21 by gzafer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(char c)
{
	return (c == ' ' || c == '\n' || c == '\t'
		|| c == '\v' || c == '\f' || c == '\r');
}

static int	ft_sign(const char *str, int *i)
{
	int	sign;

	sign = 1;
	if (str[*i] == '-')
	{
		sign = -1;
		(*i)++;
	}
	else if (str[*i] == '+')
	{
		(*i)++;
	}
	return (sign);
}

static long long	ft_result(const char *str, int *i, int sign)
{
	long long	result;

	result = 0;
	while (str[*i] >= '0' && str[*i] <= '9')
	{
		if (result > (LLONG_MAX - (str[*i] - '0')) / 10)
		{
			if (sign == -1)
			{
				return (0);
			}
			else
			{
				return (-1);
			}
		}
		result = result * 10 + (str[*i] - '0');
		(*i)++;
	}
	return (result);
}

int	ft_atoi(const char *str)
{
	int			i;
	int			sign;
	long long	result;

	i = 0;
	while (ft_isspace(str[i]))
	{
		i++;
	}
	sign = ft_sign(str, &i);
	result = ft_result(str, &i, sign);
	return (sign * result);
}
