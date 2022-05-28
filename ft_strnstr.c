/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiyoon <jiyoon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 02:58:40 by jiyoon            #+#    #+#             */
/*   Updated: 2022/05/28 13:01:15 by jiyoon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_len;
	size_t	h_idx;
	size_t	n_idx;

	if (!haystack && !needle)
		return (NULL);
	if (!*needle)
		return ((char *)haystack);
	needle_len = ft_strlen(needle);
	h_idx = 0;
	while (haystack[h_idx] && len >= h_idx + needle_len)
	{
		n_idx = 0;
		while (needle[n_idx] && haystack[h_idx + n_idx] == needle[n_idx])
			n_idx++;
		if (needle[n_idx] == '\0')
			return ((char *)&haystack[h_idx]);
		h_idx++;
	}
	return (NULL);
}
