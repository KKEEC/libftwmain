#include "ft_putchar_fd.c"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
}

int main(void)
{
    //ft_putstr_fd
    int fd;
    fd = open("putstrtest.txt", O_WRONLY | O_TRUNC | O_CREAT, 777);
    if (fd == -1)
        return (1);
    ft_putstr_fd("thisisputstrtest", fd);
    close(fd);

}