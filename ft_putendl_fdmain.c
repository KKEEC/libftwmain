#include "ft_putchar_fd.c"
#include "ft_putstr_fd.c"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}

int main(void)
{
    //ft_putendl_fd
    int fd;
    fd = open("putendltest.txr", O_WRONLY | O_TRUNC | O_CREAT, 777);
    if (fd == -1)
        return (1);
    ft_putendl_fd("This is putendltest", fd);

}