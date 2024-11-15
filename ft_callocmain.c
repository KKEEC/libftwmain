#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "ft_memset.c"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*arr;

	if ((nmemb * size) > INT_MAX)
		return (NULL);
	if (!(nmemb || size))
		return (NULL);
	arr = malloc(nmemb * size);
	if (!arr)
		return (NULL);
	ft_memset(arr, 0, nmemb * size);
	return ((void *)arr);
}

int main(void)
{
    //ft_calloc 
    printf("\nft_calloc\n allocates memory for nmemb elements eaach of size bytes and sets it to 0 using memset\n");
    char *calstr;
    char *mycalstr;
    size_t nmemb = 5;
    size_t size = 6;
    size_t	i = 0;

    calstr = calloc(nmemb, size);
    mycalstr = ft_calloc(nmemb, size);
    printf("native calloc elements \n");
    while (i <= size)
    {
        printf("%c", calstr);
        i++;
    }
    printf("\n");
    i = 0;
    printf("Native calloc returns\n");
    while (i <= size)
    {
            printf("%c", calstr);
            i++;
    }
    printf("\n");

    free(mycalstr);
    free(calstr);

}