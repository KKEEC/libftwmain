/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkc <kkc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:56:43 by kkc               #+#    #+#             */
/*   Updated: 2024/11/12 09:24:53 by kkc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *block, int c, size_t size)
{
	unsigned char	*cptr;
	unsigned char	key;

	cptr = (unsigned char *)block;
	key = (unsigned char)c;
	while (size--)
	{
		*cptr = key;
		cptr++;
	}
	return (block);
}
