/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiyoon <jiyoon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 04:09:55 by jiyoon            #+#    #+#             */
/*   Updated: 2022/05/23 07:03:20 by jiyoon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	word_cnt(char const *s, char c)
{
	int	idx;
	int	cnt;

	idx = 0;
	cnt = 0;
	while (s[idx])
	{
		if (s[idx] != c)
		{
			cnt++;
			while (s[idx] && s[idx] != c)
				idx++;
			if (!s[idx])
				break ;
		}
		idx++;
	}
	return (cnt);
}

int	word_len(char const *s, char c)
{
	int	idx;

	idx = 0;
	while (*s && *s != c)
	{
		s++;
		idx++;
	}
	return (idx);
}

char	**ret_free(char **ret)
{
	int	idx;

	idx = 0;
	while (ret[idx])
	{
		free(ret[idx]);
		idx++;
	}
	free(ret);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**ret;
	int		idx;
	int		len;

	if (!s)
		return (NULL);
	ret = (char **)malloc(sizeof(char *) * (word_cnt(s, c) + 1));
	if (!ret)
		return (NULL);
	idx = 0;
	while (*s != '\0')
	{
		if (*s != c)
		{
			len = word_len(s, c);
			ret[idx] = ft_substr(s, 0, len);
			if (!ret[idx])
				return (ret_free(ret));
			s += len - 1;
			idx++;
		}
		s++;
	}
	ret[idx] = 0;
	return (ret);
}
