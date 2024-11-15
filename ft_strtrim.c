/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkc <kkc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 12:31:27 by kkc               #+#    #+#             */
/*   Updated: 2024/11/09 19:38:25 by kkc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static size_t	ft_exist(char c, const char *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static size_t	ft_firstunmatch(const char *str, char const *set)
{
	size_t	i;

	i = 0;
	while (str[i] && ft_exist(str[i], set))
		i++;
	return (i);
}

static size_t	ft_lastunmatch(const char *str, char const *set)
{
	size_t	i;

	i = ft_strlen(str);
	while (i > 0 && ft_exist(str[i - 1], set))
		i--;
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	firsti;
	size_t	lasti;
	char	*tstr;
	size_t	tstrl;
	size_t	i;

	if (!s1 || !set)
		return (NULL);
	firsti = ft_firstunmatch(s1, set);
	lasti = ft_lastunmatch(s1, set);
	if (firsti >= lasti)
		tstrl = 0;
	else
		tstrl = lasti - firsti;
	tstr = malloc(tstrl + 1);
	if (!tstr)
		return (NULL);
	i = 0;
	while (i < tstrl)
	{
		tstr[i] = s1[firsti + i];
		i++;
	}
	tstr[tstrl] = '\0';
	return (tstr);
}
