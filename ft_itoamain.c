#include <stdio.h>
#include <stdlib.h>

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

int main(void)
{
    //ft_itoa
    char *minint = ft_itoa(-2147483648);
    printf("when int_min  -2147483648 is passed:\n result: %s\n", minint);
    char *zero = ft_itoa(0);
    printf("when zero  0 is passed:\n result: %s \n", zero);
    char *maxint = ft_itoa(2147483647);
    printf("when max integer value  2147483647 is passed:\n result: %s\n", maxint);
    free(minint);
    free(zero);
    free(maxint);

}