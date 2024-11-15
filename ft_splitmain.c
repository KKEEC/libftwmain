#include <stdlib.h>
#include <stdio.h>
#include "ft_strchr.c"
#include "ft_strlen.c"
#include "ft_substr.c"

size_t	ft_countsubstr(char const *str, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	if (!str[i])
		return (0);
	while (str[i])
	{
		if (str[i] == c)
			i++;
		if (str[i])
			count++;
		while (str[i] != c && str[i] != '\0')
			i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	substrl;
	size_t	i;

	result = (char **)malloc((ft_countsubstr(s, c) + 1) * sizeof(char *));
	if (!s || !result)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			if (!ft_strchr(s, c))
				substrl = ft_strlen(s);
			else
				substrl = ft_strchr(s, c) - s;
			result[i++] = ft_substr(s, 0, substrl);
			s += substrl;
		}
	}
	result[i] = NULL;
	return (result);
}

int main(void)
{
    //ft_split
    char const	*source = "this@is@a@string@to@split";
    char c = '@';
    size_t countsubstr = ft_countsubstr(source, c);
    char **strings = ft_split(source, c);
    int i = 0;
    while (strings[i] != NULL)
    {
        printf("%s \n",strings[i]);
        free(strings[i]);
        i++;
    }
    free(strings);
}