#include <stdio.h>
#include <string.h>

void	ft_bzero(void *block, unsigned int size)
{
	unsigned int	i;
	char			*ptr;

	ptr = (char *)block;
	i = 0;
	while (i < size)
	{
		ptr[i] = '\0';
		i++;
	}
}

int main(void)
{
    //ft_bzero test
		char	cptr[20];
		char	tptr[20];
		unsigned int	x1 = 10;
		unsigned int	i = 0;
		ft_bzero(cptr, x1);
		printf("my bzero test \n");
		while (i < x1)
		{
			printf("element in position %u : %d \n", i, cptr[i]);
			i++;
		}
		i = 0;
		bzero(tptr, x1);
		printf("native bzero test \n");
		while (i < x1)
		{
			printf("element in position %u : %d \n", i, tptr[i]);
        	        i++;
		}

}