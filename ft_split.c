/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgagnon <mgagnon@student.42quebec.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 14:43:51 by mgagnon           #+#    #+#             */
/*   Updated: 2022/04/30 16:33:29 by mgagnon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_ind_fndr(char const *s, char c)
{
	size_t index;

	index = 0;
	while (s[index] != c)
		index++;
	return (index);
}
char	**ft_split(char const *s, char c)
{
	char	**split_rslt;
	size_t	split_point;
	size_t	index;
	size_t	s_len;

	if (!s || !c)
		return (NULL);
	s_len = ft_strlen(s);
	index = 0;
	split_point = ft_ind_fndr(s, c);
	while (split_point < s_len && !ft_strchr(s, c))
		split_point++;
	split_rslt[0][] = malloc(sizeof (char) * split_point);
	split_rslt[1][] = malloc(sizeof (char) * (s_len - split_point));
	if (!split_rslt[0] || !split_rslt[1])
		return (NULL);
	while (index < split_point)
	{
		split_rslt[0][index] = s[index];
		index++;
	}
	split_rslt[0][index] = '\0';
	split_point++;
	while (split_point < s_len)
	{
		split_rslt[1][split_point] = s[split_point];
		split_point++;
	}
	split_rslt[1][split_point] = '\0';
	return (split_rslt);
}
