#include <stdlib.h>
#include <stdio.h>
#include <bsd/string.h>

//use cc -lbsd to compile

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[i] != '\0')
	{
		j = 0;
		while (big[i + j] == little[j] && (i + j) < len)
		{
			if (big[i + j] == '\0' && little[j] == '\0')
				return ((char *)&big[i]);
			j++;
		}
		if (little[j] == '\0')
			return ((char *)big + i);
		i++;
	}
	return (0);
}

int main(){
//ft_strnstr test
    printf("ft_strnstr\n Locates a substring in a string and returns a pointer to the first character of match\n");
    const char *largestr = "HEl Lo Live";
    const char *smallstr = "Lo";
    size_t searchlen = 7;
    printf("my ft_strnstr returns: %s\n", ft_strnstr(largestr, smallstr, searchlen));
    printf("Native strnstr returns: %s\n", strnstr(largestr, smallstr, searchlen));
}