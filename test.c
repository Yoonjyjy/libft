/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiyoon <jiyoon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 00:47:49 by jiyoon            #+#    #+#             */
/*   Updated: 2022/03/16 05:43:57 by jiyoon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	if (n <= 0 || dst == src)
		return (dst);
	if (dst == NULL && src == NULL)
		return (0);
	i = 0;
	while (i < n)
	{
		*((unsigned char *)dst + i) = *((const unsigned char *)src + i);
		i++;
	}
	return (dst);
}

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
			*((unsigned char *)dst + i - 1) = *((const unsigned char *)src + i
					- 1);
			i--;
		}
	}
	return (dst);
}

int	main(void)
{
	char	src[] = "BlockDMask";
	char	dest1[] = "fffffdddddzzzzz";
	char	dest2[] = "fffffdddddzzzzz";
	char	dest3[] = "fffffdddddzzzzz";
	
	ft_memmove(dest1, src, sizeof(char) * 10);
	ft_memmove(dest2, src, sizeof(char) * 10 + 1);
	ft_memmove(dest3 + 10, src, sizeof(char) * 3);
	printf("src  : %s\n", src);
	printf("dest1 : %s\n", dest1);
	printf("dest2 : %s\n", dest2);
	printf("dest3 : %s\n", dest3);
	return (0);
}
