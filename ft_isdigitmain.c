#include <stdio.h>
#include <ctype.h>

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (2048);
	else
		return (0);
}

int main(void)
{
    //ft_digit test
    printf("ft_isdigit return value: %d \n", ft_isdigit('A'));
    printf("isdigit return value: %d \n", isdigit('A'));
    printf("ft_isdigit return value: %d \n", ft_isdigit('1'));
    printf("isdigit return value: %d \n", isdigit('1'));
    return (0);
}