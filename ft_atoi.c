/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiyoon <jiyoon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 04:27:49 by jiyoon            #+#    #+#             */
/*   Updated: 2022/05/20 06:36:50 by jiyoon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_space(char c)
{
	if (c == '\t' || c == '\n' || c == '\v' \
		|| c == '\f' || c == '\r' || c == ' ')
		return (1);
	return (0);
}

int	is_max_min(unsigned long long res, int is_neg)
{
	unsigned long long	max;

	max = 9223372036854775807;
	if (is_neg == 1 && res > max)
		res = -1;
	else if (is_neg == -1 && res > max + 1)
		res = 0;
	return (res);
}

int	ft_atoi(const char *str)
{
	int					i;
	int					is_neg;
	unsigned long long	res;

	i = 0;
	is_neg = 1;
	res = 0;
	while (is_space(str[i]))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i++] == '-')
			is_neg = -1;
	}
	while (str[i])
	{
		if ('0' <= str[i] && str[i] <= '9')
			res = (res * 10) + ((str[i++] - '0'));
		else
			break ;
	}
	res = is_max_min(res, is_neg);
	return (res * is_neg);
}
