#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *str, int c)
{
	while (*str)
	{
		if (*str == (char)c)
			return ((char *)str);
		str++;
	}
	if (c == '\0')
		return ((char *)str);
	return (NULL);
}

int main(void)
{
    const char* string = "Hello";
    int c = 'z';
    int x = 'l';
    printf("return value my func: %s \n", ft_strchr(string, c));
    printf("return value inbuilt func: %s \n", strchr(string, c));
    printf("return value my func: %s \n", ft_strchr(string, x));
    printf("return value inbuilt func: %s \n", strchr(string, x));

}
