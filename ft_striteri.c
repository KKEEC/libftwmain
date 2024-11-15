/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkc <kkc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 14:41:20 by kkc               #+#    #+#             */
/*   Updated: 2024/11/13 15:41:44 by kkc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	strlen;
	unsigned int	i;

	i = 0;
	strlen = 0;
	if (s != NULL && f != NULL)
	{
		strlen = ft_strlen(s);
		while (i < strlen)
		{
			(*f)(i, s);
			i++;
			s++;
		}
	}
}
