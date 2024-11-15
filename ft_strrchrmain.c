#include <stdio.h>
#include <string.h>

static int	ft_strlen(const char *string)
{
	int	i;

	i = 0;
	while (string[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strrchr(const char *str, int c)
{
	int		j;
	void	*match;

	j = ft_strlen(str);
	match = 0;
	while (j >= 0)
	{
		if (str[j] == (char)c)
		{
			match = (char *)&str[j];
			break ;
		}
		else
			j--;
	}
	return ((char *)match);
}

int main(void)
{
    // ft_strrchr test
    const char* string = "Hello";
    		int c = 'z';
		int x = 'l';

    printf("return value my func: %s \n", ft_strrchr(string, c));
    printf("return value inbuilt func: %s \n", strrchr(string, c));
    printf("return value my func: %s \n", ft_strrchr(string, x));
    printf("return value inbuilt func: %s \n", strrchr(string, x));

}
