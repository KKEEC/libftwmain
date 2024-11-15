
#include <stdio.h>
#include <ctype.h>

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90)
		|| (c >= 97 && c <= 122))
	{
		return (1024);
	}
	else
		return (0);
}

int main (void)
{
    //ft_alpha test
    printf("ft_isalpha return value: %d \n", ft_isalpha('A'));
    printf("isalpha return value: %d \n", isalpha('A'));
    printf("ft_isalpha return value: %d \n", ft_isalpha('3'));
    printf("isalpha return value: %d \n", isalpha('3'));
    printf("ft_isalpha return value: %d \n", ft_isalpha(52));
    printf("isalpha return value: %d \n", isalpha(52));
    return(0);
}