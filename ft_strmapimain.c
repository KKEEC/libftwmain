#include <stdio.h>
#include <stdlib.h>
#include "ft_strdup.c"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*result;
	int		i;

	i = 0;
	result = ft_strdup(s);
	while (result[i])
	{
		result[i] = f(i, result[i]);
		i++;
	}
	return (result);
}
char asciireducer(unsigned int i, char c)
{
    i = 1;
    c = c - i;
    return (c);
}

int main(void)
{
    //ft_strmapi
    

    printf("\n applies the function f on each character of string passed as args");
    char *string = "HELLO";
    char *resultstrmapi = ft_strmapi(string, asciireducer);
    printf("%s", resultstrmapi);
    free(resultstrmapi);

}