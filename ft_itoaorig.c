/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkc <kkc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 15:01:41 by kkc               #+#    #+#             */
/*   Updated: 2024/11/14 11:20:54 by kkc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countsigndigit(int n)
{
	int	digit;

	digit = 0;
	if (n <= 0)
		digit = digit + 1;
	while (n)
	{
		n /= 10;
		digit++;
	}
	return (digit);
}


char	*ft_itoa(int n)
{
	char	*container;
	int		totaldigit;
	int		sign;

	sign = 0;
	if (n < 0)
	{
		sign = 1;
		n = -n;
	}
	totaldigit = ft_countsigndigit(n) + sign;
	container = (char *)malloc(sizeof(char) * (totaldigit + 1));
	if (!container)
		return (NULL);
	container[totaldigit] = '\0';
	totaldigit--;
	while (totaldigit >= 0)
	{
		if (sign == 1 && totaldigit == 0)
		{
			container[0] = '-';
			return (container);
		}
		container[totaldigit] = n % 10 + '0';
		n = n / 10;
		totaldigit--;
	}
	return (container);
}
