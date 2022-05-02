/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgagnon <mgagnon@student.42quebec.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 14:43:51 by mgagnon           #+#    #+#             */
/*   Updated: 2022/05/01 23:24:26 by mgagnon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static size_t	ft_word_count(char const *s, char c)
{
	size_t index;
	size_t	word_count;

	index = 0;
	word_count = 0;
	while (s[index])
	{
		if (s[index] == c)
			word_count++;
		index++;
	}
	word_count++;
	printf("word count is = %i\n", word_count);
	return (word_count);
}

static size_t	ft_word_size(char const *s, char c)
{
	size_t	index;
	
	index = 0;
	while(s[index] != c)
		index++;
	printf("word size is = %i\n", (index));
	return (index);
}
	
char	**ft_split(char const *s, char c)
{
	char	**split_result;
	size_t	next_array;
	size_t	index;
	size_t	s_len;
	size_t	count;
	size_t	size;

	index = 0;
	if (!s || !c)
		return (NULL);
	s_len = ft_strlen(s);
	count = ft_word_count(s, c);
	split_result = malloc (sizeof (char) * count);
	if (!split_result)
		return (NULL);
	next_array = 0;
	while (index <= count && next_array <= s_len)
	{
		size = (ft_word_size(&s[next_array], c) + 1);
		split_result[index] = malloc(sizeof (char) * size);
		if (!split_result[index])
			return (NULL);
		ft_substr(s, next_array, size);
		next_array = size + 1;
		index++;
	}
	return (split_result);
}

int	main(void)
{
	char const	*s = "abcd,efgh,ij,klmno,pqrstuv,w,xyz";
	char		c;

	c = ',';
	ft_split(s, c);
	return (0);
}
