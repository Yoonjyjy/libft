/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiyoon <jiyoon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 01:57:53 by jiyoon            #+#    #+#             */
/*   Updated: 2022/05/20 02:21:56 by jiyoon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*byte;
	unsigned char	ch;

	byte = (unsigned char *)s;
	ch = c;
	i = 0;
	while (i < n)
	{
		if (byte[i] == ch)
			return ((byte + i));
		i++;
	}
	return (0);
}
