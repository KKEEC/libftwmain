#include <stdio.h>
#include <string.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

int main(void)
{
    const char str[25] = "Hello world!";
	printf("ft_strlen test for Hello world! :%d \n", ft_strlen(str));
    printf("strlen test for Hello world! :%d \n", strlen(str));

}