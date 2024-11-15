#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *to, const void *from, size_t size)
{
	size_t	i;
	char	*dest;
	char	*src;

	dest = (char *)to;
	src = (char *)from;
	i = 0;
	while (i < size)
	{
		dest[i] = src[i];
		i++;
	}
	return (to);
}

int main(void)
{
    //ft_memcpy test
    char	tofill[20] = "world";
    char	tofillof[20] = "world";
    const char	*fromfill = "Hello world";
    unsigned int howmany;
    howmany = 5;
    unsigned int check = 0;
    char *myfunc = (char *)ft_memcpy(tofill, fromfill, howmany);
    char *memcp = (char *)memcpy(tofillof, fromfill, howmany);
    printf("myfunc return value: \n" );
    while (check < howmany)
    {
        printf("%dth element: %c \n", check, myfunc[check]);
        check++;
    }
    printf("\n");
    check = 0;
    printf("memcpy func return value : \n");
    while (check < howmany)
    {
            printf("%dth element: %c \n",check, memcp[check]);
        check++;
    }

}