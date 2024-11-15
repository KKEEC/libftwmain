#include <stdio.h>
#include <string.h>

int	ft_memcmp(const void *a1, const void *a2, size_t size)
{
	const unsigned char	*s1;
	const unsigned char	*s2;
	size_t				i;

	s1 = (const unsigned char *)a1;
	s2 = (const unsigned char *)a2;
	i = 0;
	while (i < size)
	{
		if (s1[i] != s2[i])
			return ((int)(s1[i] - s2[i]));
		i++;
	}
	return (0);
}

int main(void)
{
    //ft-memcmp test
    const char	*aa = "";
    const char	*bb = "Helloworld";
    unsigned int	numtocheck = 6;

    printf("my func returns: %d \n", ft_memcmp(aa, bb, numtocheck));
    printf("native returns: %d \n", memcmp(aa, bb, numtocheck));

}