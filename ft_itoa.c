/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkc <kkc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 15:01:41 by kkc               #+#    #+#             */
/*   Updated: 2024/11/14 12:18:33 by kkc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countsigndigit(long n)
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

char	*ft_convertitoa(int totaldigit, int sign, long nbr, char *container)
{
	while (totaldigit >= 0)
	{
		if (sign == 1 && totaldigit == 0)
		{
			container[0] = '-';
			return (container);
		}
		container[totaldigit] = nbr % 10 + '0';
		nbr = nbr / 10;
		totaldigit--;
	}
	return (container);
}

char	*ft_itoa(int n)
{
	char	*container;
	int		totaldigit;
	int		sign;
	long	nbr;

	nbr = n;
	sign = 0;
	if (nbr < 0)
	{
		sign = 1;
		nbr = -nbr;
	}
	totaldigit = ft_countsigndigit(nbr) + sign;
	container = (char *)malloc(sizeof(char) * (totaldigit + 1));
	if (!container)
		return (NULL);
	container[totaldigit] = '\0';
	totaldigit--;
	return (ft_convertitoa(totaldigit, sign, nbr, container));
}
