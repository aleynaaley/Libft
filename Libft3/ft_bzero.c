/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alerkul <alerkul@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 23:39:18 by alerkul           #+#    #+#             */
/*   Updated: 2023/12/16 22:35:59 by alerkul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//belirtilen boyutta (n) belleği sıfırlar. Fonksiyon, void *s parametresi ile belirtilen bellek alanını alır
//ve her bir baytı sıfır (0) ile doldurur.

#include "libft.h"

void   ft_bzero(void *s, size_t n)
{
  ft_memset(s, '\0', n);
}

/*
int main() {
    char str[] = "açıkkaynakplatformu";
    printf("%s\n", ft_bzero(str, 5));
}
*/

//void döndürdüğü için sanırım çıktısı olmuyor


