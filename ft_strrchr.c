/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiyoon <jiyoon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 01:00:03 by jiyoon            #+#    #+#             */
/*   Updated: 2022/05/20 01:20:54 by jiyoon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;
	size_t	len;

	ptr = (char *)s;
	len = ft_strlen(s);
	if (c == 0)
		return ((char *)&s[len]);
	while (len != 0)
	{
		if (s[len - 1] == (unsigned char)c)
			return ((char *)&s[len - 1]);
		len--;
	}
	return (0);
}
