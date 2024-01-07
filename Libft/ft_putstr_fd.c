

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	while (*s != '\0')
	{
		write(fd, &(*s), 1);
		s++;
	}
}

int main () {
    int fd = open("a.txt",O_RDWR | O_CREAT , 0777);
    ft_putstr_fd('a',fd);
}
