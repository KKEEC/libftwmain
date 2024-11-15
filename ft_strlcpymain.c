#include <stdio.h>
#include <bsd/string.h>

//use cc -lbsd(using this flag to check with native function) 
static unsigned int	ft_strlen(const char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

size_t	ft_strlcpy(char *to, const char *from, size_t size)
{
	size_t	j;
	size_t	lenfrom;

	lenfrom = ft_strlen(from);
	j = 0;
	if (size > 0)
	{
		while (j < size - 1 && from[j] != '\0')
		{
			to[j] = from[j];
			j++;
		}
		to[j] = '\0';
	}
	return (lenfrom);
}

int main(void)
{
    //ft_strlcpy test
    char dest[20] = "Hello";
    char dest1[20] = "Hello";
    const char *sorc = "world! is a fun place";
    size_t ui = 2;
    printf("my strlcpy return %zu \n", ft_strlcpy(dest, sorc, ui));
    printf("Resulting dest: %s\n", dest);
    printf("strlcpy return %zu \n", strlcpy(dest1, sorc, ui));
    printf("Resulting dest: %s\n", dest1);

}