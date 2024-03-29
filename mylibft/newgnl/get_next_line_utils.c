/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kneves <kneves@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 07:53:29 by kneves            #+#    #+#             */
/*   Updated: 2024/03/27 17:35:57 by kneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	slen;
	size_t	i;

	if (!s || start >= ft_strlen(s))
		return (ft_strdup(""));
	slen = ft_strlen(s);
	if (slen - start > len)
		substr = malloc(sizeof(char) * len + 1);
	else
		substr = malloc(sizeof(char) * slen - start + 1);
	if (!substr)
		return (NULL);
	i = 0;
	while (i < len && s[i])
	{
		substr[i] = s[i + start];
		if (s[i + start] == '\0')
			return (substr);
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
