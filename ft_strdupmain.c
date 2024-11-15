#include <stdio.h>
#include <string.h>
#include <stdlib.h>

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*dup;
	char	*start;

	len = ft_strlen(s);
	dup = malloc(len + 1);
	if (dup == NULL)
		return (NULL);
	start = dup;
	while (len--)
	{
		*dup = *s;
		dup++;
		s++;
	}
	*dup = '\0';
	return (start);
}

int main(void)
{
    //ft_strdup
    printf("ft_strdup\n Duplicates passed string and allocates memory then returns pointer to new string\n");
    const char *duplicatethis = "duplicate this";
    const char *duplicatethat = "";
    
    char *catedstr = ft_strdup(duplicatethis);
    char *catedstr1 = strdup(duplicatethis);
    printf("My ft_strdup returns: %s \t when %s is passed\n", ft_strdup(duplicatethis), duplicatethis);
    printf("Native strdup returns: %s \t when %s is passed\n", strdup(duplicatethis), duplicatethis);
    printf("My ft_strdup returns: %s \t when  %s is passed\n", ft_strdup(duplicatethat), duplicatethat);
    printf("My strdup returns: %s \t when %s is passed\n", strdup(duplicatethat), duplicatethat);
    free(catedstr);
    free(catedstr1);

}