#include <stdio.h>
#include <string.h>
void	*ft_memset(void *block, int c, size_t size)
{
	unsigned char	*cptr;
	unsigned char	key;

	cptr = (unsigned char *)block;
	key = (unsigned char)c;
	while (size--)
	{
		*cptr = key;
		cptr++;
	}
	return (block);
}

int main(void)
{
    //ft_memset test
    unsigned int s = 10;
    unsigned char ft_str[s];
    unsigned char stri[s];
    unsigned int times = 7;

    ft_memset(ft_str, 'y', times);
    memset(stri, 'y', times);

    printf("Return value of my ft_memset function: ");
    for (unsigned int i = 0; i < times + 1; i++)
    {
            printf("%c ", ft_str[i]);
    }
    printf("\n");

    printf("Return value of memset: ");
    for (unsigned int i = 0; i < times + 1; i++)
    {
            printf("%c ", stri[i]);
    }
    printf("\n");

}