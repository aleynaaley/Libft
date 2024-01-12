

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
int main (){
    fd = open("a.txt",O_CREAT | O_RDWR ,0777);
    ft_putchar_fd('a',fd);
    close(fd);
}
