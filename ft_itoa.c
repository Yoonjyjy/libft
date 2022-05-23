/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiyoon <jiyoon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 06:21:44 by jiyoon            #+#    #+#             */
/*   Updated: 2022/05/23 07:00:29 by jiyoon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	num_len(int n)
{
	int	i;

	i = 0;
	if (n <= 0)
		i++;
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char		*ret;
	int			len;
	long long	tmp;

	len = num_len(n);
	tmp = (long long)n;
	ret = (char *)malloc(sizeof(char) * (len + 1));
	if (!ret)
		return (NULL);
	if (tmp < 0)
	{
		ret[0] = '-';
		tmp *= -1;
	}
	if (tmp == 0)
		ret[0] = '0';
	ret[len--] = 0;
	while (tmp)
	{
		ret[len] = tmp % 10 + '0';
		tmp /= 10;
		len--;
	}
	return (ret);
}
