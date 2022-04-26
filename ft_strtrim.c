/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgagnon <mgagnon@student.42quebec.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 14:48:17 by mgagnon           #+#    #+#             */
/*   Updated: 2022/04/26 15:06:44 by mgagnon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	new_len;
	char	*new_str;
	size_t	s1_len;
	size_t	set_len;
	size_t	index;

	set_len = ft_strlen(set);
	s1_len = ft_strlen(s1);
	new_len = s1_len - set_len + 1;
	new_str = malloc(sizeof(char) * new_len);
	if (!new_str)
		return (NULL);
	while (s1)
	{
	return (new_str);
}
