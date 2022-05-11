/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiyoon <jiyoon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 00:47:49 by jiyoon            #+#    #+#             */
/*   Updated: 2022/05/11 16:04:32 by jiyoon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
{
	unsigned int	i;

	i = 0;
	if (dstsize <= 0)
		return (ft_strlen(src));
	if (*dst == '\0')
		return (0);
	while (i + 1 < dstsize && *(src + i) != '\0')
	{
		*(dst + i) = *(src + i);
		i++;
	}
	*(dst + i) = '\0';
	while (*(src + i))
		i++;
	return (i);
}

int	main(void)
{
	char	src[] = "hello";
	char	dst[] = "goods";
	
	printf("%zu", ft_strlcpy(dst,src,3));	// return (5) : 5, dst(he) :  he
	return (0);
}
