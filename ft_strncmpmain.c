#include <stdio.h>
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t size)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < size)
	{
		if ((unsigned char)s1[i] == (unsigned char)s2[i])
			i++;
		else
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	}
	return (0);
}

int main(void)
{
    // strncmp test
    char str1[20] = "hello";
    char str2[20] = "llo";
    char str3[8] = "hello";
    unsigned int size = 5;
    unsigned int size1 = 7;

    printf("return value of myfunc: %d \n", ft_strncmp(str1, str2, size));
    printf("return value of strncmp func: %d \n", strncmp(str1, str2, size));
    printf("return value of myfunc: %d \n", ft_strncmp(str1, str2, size1));
    printf("return value of strncmp func: %d \n", strncmp(str1, str2, size1));
    printf("return value of myfunc: %d \n", ft_strncmp(str1, str3, size));
    printf("return value of strncmp func: %d \n", strncmp(str1, str3, size));

}
