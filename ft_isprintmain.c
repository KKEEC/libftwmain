#include <ctype.h>
#include <stdio.h>

int	ft_isprint(int c)
{
	if (c >= 32 && c < 127)
		return (16384);
	else
		return (0);
}

int main(void)
{
    printf("ft_isprint return value: %d \n", ft_isprint('A'));
    printf("isprint return value: %d \n", isprint('A'));
    printf("ft_isprint return value: %d \n", ft_isprint(128));
    printf("isprint return value: %d \n", isprint(128));
}