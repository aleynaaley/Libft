/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alerkul <alerkul@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 09:42:06 by alerkul           #+#    #+#             */
/*   Updated: 2023/12/17 11:38:29 by alerkul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
    long nbr;

    nbr = n;
    if(nbr < 0)
    {
        write(fd, "-", 1);
        nbr *= -1;
    }
    if(nb > 9)
    {
        ft_putnbr_fd(nbr / 10 , fd);
        ft_putchar_fd((nb % 10) + '0' ,fd);
    }
    else
        ft_putchar_fd(nbr + '0',fd);
}

/*
int main() {
    int number1 = 12345;
    int number2 = -6789;

    ft_putnbr_fd(number1, STDOUT_FILENO);  // Standart çıkışa yazdırma
    ft_putchar_fd('\n', STDOUT_FILENO);   // Yeni satır ekleme
    ft_putnbr_fd(number2, STDOUT_FILENO);  // Standart çıkışa yazdırma
    ft_putchar_fd('\n', 1);   // Yeni satır ekleme

    return 0;
}
*/