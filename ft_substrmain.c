#include <stdlib.h>
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sstr;
	size_t	i;

	sstr = malloc(len * sizeof(char) + 1);
	if (!sstr)
		return (NULL);
	i = 0;
	while (s[i] && i < len)
	{
		sstr[i] = s[(size_t)start];
		i++;
		start++;
	}
	sstr[i] = '\0';
	return (sstr);
}

int main(){
    //ft_substr
    printf("\n Allocates with malloc and returns substring from string with index starting at start and until size len\n");
    char const *string = "Hello this is the result";
    char const *empty = "";
    char *substr;
    char *emtysrc;

    substr = ft_substr(string, 6, 5);
    emtysrc = ft_substr(string, 0, 5);
    printf("substring from source : %s \n the output is : %s \n",string, substr);
    printf("substring from source : %s \n the output is : %s \n", empty, emtysrc);

    free(substr);
    free(emtysrc);
}