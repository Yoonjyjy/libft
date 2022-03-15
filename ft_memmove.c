/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiyoon <jiyoon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 03:51:10 by jiyoon            #+#    #+#             */
/*   Updated: 2022/03/16 05:29:41 by jiyoon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	if (dst == NULL && src == NULL)
		return (0);
	if (dst < src)
	{
		i = 0;
		while (i < len)
		{
			*((unsigned char *)dst + i) = *((const unsigned char *)src + i);
			i++;
		}
	}
	else
	{
		i = len;
		while (i)
		{
			*((unsigned char *)dst + i - 1) \
				= *((const unsigned char *)src + i - 1);
			i--;
		}
	}
	return (dst);
}
