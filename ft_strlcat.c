/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiyoon <jiyoon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 23:33:56 by jiyoon            #+#    #+#             */
/*   Updated: 2022/05/20 00:10:20 by jiyoon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	ret_val;
	size_t	i;

	i = 0;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	ret_val = dst_len + src_len;
	if (dst_len >= dstsize)
		return (dstsize + src_len);
	while (src[i] && dst_len + 1 < dstsize)
		dst[dst_len++] = src[i++];
	dst[dst_len] = '\0';
	return (ret_val);
}
