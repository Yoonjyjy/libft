/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiyoon <jiyoon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 02:01:32 by jiyoon            #+#    #+#             */
/*   Updated: 2022/05/19 23:32:55 by jiyoon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	if (n <= 0 || dst == src)
		return (dst);
	if (!dst && !src && n)
		return (NULL);
	i = 0;
	while (i < n)
	{
		*((unsigned char *)dst + i) = *((const unsigned char *)src + i);
		i++;
	}
	return (dst);
}
