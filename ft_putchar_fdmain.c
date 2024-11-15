#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

int main(void)
{
//ft_putchar_fd
    int fd;
    fd = open("putchartest.txt", O_WRONLY | O_TRUNC | O_CREAT, 777);
    if (fd == -1)
            return (1);
    ft_putchar_fd('x', fd);
    close(fd);
}