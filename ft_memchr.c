/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkc <kkc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:04:33 by kkc               #+#    #+#             */
/*   Updated: 2024/11/12 09:30:13 by kkc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *block, int c, size_t size)
{
	unsigned char	*ptr;
	unsigned char	result;
	void			*match;
	size_t			i;

	ptr = (unsigned char *)block;
	i = 0;
	match = 0;
	result = (unsigned char)c;
	while (i < size)
	{
		if (ptr[i] == result)
		{
			match = &ptr[i];
			break ;
		}
		else
			i++;
	}
	return (match);
}
