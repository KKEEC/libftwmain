#include <stdio.h>
#include <ctype.h>

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		c = c + 32;
		return (c);
	}
	else
		return (c);
}

int main(void)
{
    // ft_tolower test
    printf("ft_tolower return value: %c \n", ft_tolower('X'));
    printf("tolower return value: %c \n", tolower('X'));
    printf("ft_tolower return value: %c \n", ft_tolower('o'));
    printf("tolower return value: %c \n", tolower('o'));
}