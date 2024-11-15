
#include <stdio.h>
#include <ctype.h>
#include "ft_isalpha.c"
#include "ft_isdigit.c"



int	ft_isalnum(int c)
{
	if (ft_isalpha(c) > 0 || ft_isdigit(c) > 0)
		return (8);
	else
		return (0);
}

int main(void)
{
    //ft_isalnum test
    printf("ft_isalnum return value: %d \n", ft_isalnum('A'));
    printf("isalnum return value: %d \n", isalnum('A'));
    printf("ft_isalnum return value: %d \n", ft_isalnum('&'));
    printf("isalnum return value: %d \n", isalnum('&'));
    return (0);
}