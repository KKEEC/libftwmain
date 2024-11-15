/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkc <kkc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:48:29 by kkc               #+#    #+#             */
/*   Updated: 2024/11/12 09:33:10 by kkc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *to, const char *from, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	fromlen;
	size_t	tolen;

	i = 0;
	j = 0;
	fromlen = ft_strlen(from);
	tolen = ft_strlen(to);
	if (size == 0)
		return (fromlen);
	while (to[i] && i < size)
		i++;
	if (i == size)
		return (size + fromlen);
	while (from[j] && (i + j + 1) < size)
	{
		to[i + j] = from[j];
		j++;
	}
	if (i + j < size)
		to[i + j] = '\0';
	return (tolen + fromlen);
}
