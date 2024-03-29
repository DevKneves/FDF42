/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kneves <kneves@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 07:53:29 by kneves            #+#    #+#             */
/*   Updated: 2024/03/27 17:35:11 by kneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Allocates (with malloc(3)) and returns a copy of
’s1’ with the characters specified in ’set’ removed
from the beginning and the end of the string.
*/
#include "libft.h"

static int	getstart(const char *s1, const char *set, size_t len)
{
	size_t	i;

	i = -1;
	while (i++, i < len)
		if (ft_strchr(set, s1[i]) == 0)
			break ;
	return (i);
}

static int	getend(const char *s1, const char *set, size_t len)
{
	size_t	i;

	i = -1;
	while (i++, i < len)
		if (ft_strchr(set, s1[len - i - 1]) == 0)
			break ;
	return (len - i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*newstr;

	if (s1 == 0)
		return (0);
	if (set == 0)
		return (ft_strdup(s1));
	start = getstart(s1, set, ft_strlen(s1));
	end = getend(s1, set, ft_strlen(s1));
	if (start >= end)
		return (ft_strdup(""));
	newstr = (char *)malloc(sizeof(char) * (end - start + 1));
	if (newstr == 0)
		return (0);
	ft_strlcpy(newstr, s1 + start, end - start + 1);
	return (newstr);
}
