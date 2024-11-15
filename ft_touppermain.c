#include <stdio.h>
#include <ctype.h>

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		c = c - 32;
		return (c);
	}
	else
		return (c);
}

int main(void)
{
    // ft_toupper test
    printf("ft_toupper return value: %c \n", ft_toupper('X'));
    printf("toupper return value: %c \n", toupper('X'));
    printf("ft_toupper return value: %c \n", ft_toupper('a'));
    printf("toupper return value: %c \n", toupper('a'));


}