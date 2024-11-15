#include <stdio.h>
#include <string.h>

static void	fwd(unsigned char *to, const unsigned char *from, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		to[i] = from[i];
		i++;
	}
}

static void	bwd(unsigned char *to, const unsigned char *from, size_t size)
{
	while (size > 0)
	{
		size--;
		to[size] = from[size];
	}
}

void	*ft_memmove(void *to, const void *from, size_t size)
{
	if (!to || !from)
		return (NULL);
	if (to < from)
		fwd((unsigned char *)to, (const unsigned char *)from, size);
	else
		bwd((unsigned char *)to, (const unsigned char *)from, size);
	return (to);
}

int main(void)
{
    // ft_memmove test
    char cpto[10] = "Hello1";
    char cpto1[10] = "llllllllll";
    const char cpfrom[15] = "Hello world";
    unsigned int btocpy = 11;
    unsigned int display = 0;

    char *result = (char *)ft_memmove(cpto, cpfrom, btocpy);
    printf("my memmove func return: \n");
    while(display < btocpy)
    {
        printf("%c",result[display]);
        display++;
    }
    printf("\n");
    display = 0;
    char *result1 = (char *)ft_memmove(cpto1, cpfrom, btocpy);
    printf("native memmove func return: \n");
    while(display < btocpy)
    {
        printf("%c",result1[display]);
        display++;
    }
    printf("\n");

}