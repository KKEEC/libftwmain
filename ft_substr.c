/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkc <kkc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 10:43:50 by kkc               #+#    #+#             */
/*   Updated: 2024/11/09 11:22:31 by kkc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sstr;
	size_t	i;

	sstr = malloc(len * sizeof(char) + 1);
	if (!sstr)
		return (NULL);
	i = 0;
	while (s[i] && i < len)
	{
		sstr[i] = s[(size_t)start];
		i++;
		start++;
	}
	sstr[i] = '\0';
	return (sstr);
}
