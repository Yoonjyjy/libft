/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiyoon <jiyoon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 00:29:00 by jiyoon            #+#    #+#             */
/*   Updated: 2022/05/20 01:05:57 by jiyoon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	ch;
	char	*ptr;

	ch = (char)c;
	ptr = (char *)s;
	if (ch == '\0')
		return (ptr);
	while (*ptr)
	{
		if (*ptr == ch)
			return (ptr);
		ptr++;
	}
	return (0);
}
