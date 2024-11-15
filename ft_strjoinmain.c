#include <stdlib.h>
#include <stdio.h>


static size_t	ft_strlength(char const *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*nstr;
	size_t	i;
	size_t	j;
	size_t	nstrl;

	nstrl = ft_strlength(s1) + ft_strlength(s2);
	nstr = malloc(nstrl + 1);
	i = 0;
	if (!nstr)
		return (NULL);
	while (s1[i])
	{
		nstr[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		nstr[i + j] = s2[j];
		j++;
	}
	nstr[i + j] = '\0';
	return (nstr);
}

int main(void)
{
    // ft_strjoin
    printf("\n joins two string passed as a parameter and returns a new string with malloc\n");
    char const *source1 = "hELLO";
    char const *source2 = " WORLD";
    char const *mtysrc = "";

    char *results1s2 = ft_strjoin(source1, source2);
    char *resultmty = ft_strjoin(source1, mtysrc);
    printf("%s and %s passed in my function returns: \n%s\n", source1, source2, results1s2);
    printf("%s and %s passed in my function returns: \n%s\n", source1, mtysrc, resultmty);
    free(results1s2);
    free(resultmty);

}