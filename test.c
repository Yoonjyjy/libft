/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiyoon <jiyoon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 00:47:49 by jiyoon            #+#    #+#             */
/*   Updated: 2022/03/16 01:52:19 by jiyoon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	*ft_memset(void *ptr, int value, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
		*((unsigned char *)ptr + i++) = (unsigned char)value;
	return (ptr);
}

int	main(void)
{
	char	arr[10];

	printf("%p\n", &arr[0]);
	printf("%p\n", memset(arr, 0, sizeof(arr)));
	printf("%p\n", ft_memset(arr, 0, sizeof(arr)));
	printf("%p\n", &arr[1]);
	return (0);
}

// int	main(void)
// {
// 	int	i;

// 	i = ft_strlen("127");
// 	printf("%d", i);
// 	return (0);
// }
