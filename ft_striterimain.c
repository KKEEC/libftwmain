#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "ft_strlen.c"

void	iterate(unsigned int i, char *c)
{
	static int indexArray[11] = {0};

	if (i > 10 || indexArray[i] == 1)
		write(1, "wrong index\n", 12);
	else
		indexArray[i] = 1;
	if (*c >= 'a' && *c <= 'z')
		*c = *c - 32;
	else if (*c >= 'A' && *c <= 'Z')
		*c = *c + 32;
}

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	strlen;
	unsigned int	i;

	i = 0;
	strlen = 0;
	if (s != NULL && f != NULL)
	{
		strlen = ft_strlen(s);
		while (i < strlen)
		{
			(*f)(i, s);
			i++;
			s++;
		}
	}
}


int main(void)
{
		printf("\n applies function f on each char os str passed as args\n");
		char s[] = "Hello";
        ft_striteri(s, iterate);
        printf("after applying function iterate result is : %s\n", s);	
}