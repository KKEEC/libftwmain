#include <stdio.h>
#include <stdlib.h>


int	ft_atoi(const char *str)
{
	long	nbr;
	long	neg;
	long	i;

	nbr = 0;
	neg = 1;
	i = 0;
	while ((str[i] == ' ') || ((str[i] >= 9 && str[i] <= 13)))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nbr = nbr * 10 + (str[i] - 48);
		i++;
	}
	return (int)(nbr * neg);
}
int main(void){
//ft_atoi test
    const char *mixedstr = "hello-1234";
    const char *teststring = "12345abc-2";
    printf("My ft_atoi returns: %d when  %s is passed\n", ft_atoi(mixedstr), mixedstr);
    printf("Native atoi returns: %d when  %s is passed\n", atoi(mixedstr), mixedstr);
    printf("my atoi returns: %d when  %s is passed\n", ft_atoi(teststring), teststring);
    printf("native atoi returns: %d when  %s is passed\n", atoi(teststring), teststring);
}