/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alerkul <alerkul@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 11:16:00 by alerkul           #+#    #+#             */
/*   Updated: 2023/12/17 11:38:44 by alerkul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putchar_fd(char c, int fd)
{
    write(fd, &c, 1);
}


/*
int main()
{
    ft_putchar_fd('A', 1);  //2 olsa terminale falan yazdırabilri 

    // Dosyaya yazdırma
    int file_descriptor = open("output.txt", O_WRONLY | O_CREAT, 0644);
    if (file_descriptor == -1)
    {
        return 1;
    }

    ft_putchar_fd('B', file_descriptor);

    // Dosya tanımlayıcısını kapatma
    close(file_descriptor);

    return 0;
}
*/