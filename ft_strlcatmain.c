#include <stdio.h>
#include <bsd/string.h>

#include "ft_strlen.c"
//Use cc -lsbd to compile

size_t	ft_strlcat(char *to, const char *from, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	fromlen;
	size_t	tolen;

	i = 0;
	j = 0;
	fromlen = ft_strlen(from);
	tolen = ft_strlen(to);
	if (size == 0)
		return (fromlen);
	while (to[i] && i < size)
		i++;
	if (i == size)
		return (size + fromlen);
	while (from[j] && (i + j + 1) < size)
	{
		to[i + j] = from[j];
		j++;
	}
	if (i + j < size)
		to[i + j] = '\0';
	return (tolen + fromlen);
}

int main(void)
{
    //strlcat test
    char strdest[20] = "Hello";
    char strdest1[20] = "Hello";
    const char *sourcelcat = "whats your name?";
    size_t tcpy = 5;
    printf("my strlcat return %zu and dest string: %s\n", ft_strlcat(strdest, sourcelcat, tcpy), strdest);
    printf("my strlcat return %zu and dest string: %s\n", strlcat(strdest1, sourcelcat, tcpy), strdest1);

}