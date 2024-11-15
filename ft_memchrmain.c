#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *block, int c, size_t size)
{
	unsigned char	*ptr;
	unsigned char	result;
	void			*match;
	size_t			i;

	ptr = (unsigned char *)block;
	i = 0;
	match = 0;
	result = (unsigned char)c;
	while (i < size)
	{
		if (ptr[i] == result)
		{
			match = &ptr[i];
			break ;
		}
		else
			i++;
	}
	return (match);
}

int main(void)
{
    //ft_memchr test
    const void *src = "Helloworld";
    int find = 'w';
    unsigned int findini6 = 6;
    unsigned int findin5 = 5;

    printf("the return value of my func is: %p \n", ft_memchr(src, find , findini6));
    printf("the return value of memchr is: %p \n", memchr(src, find , findini6));
    printf("the return value of my func is: %p \n", ft_memchr(src, 'o' , findin5));
    printf("the return value of memchr func is: %p \n", memchr(src, 'o' , findin5));
}
