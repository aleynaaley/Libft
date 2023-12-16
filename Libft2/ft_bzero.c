/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alerkul <alerkul@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 23:39:18 by alerkul           #+#    #+#             */
/*   Updated: 2023/12/10 23:39:21 by alerkul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//belirtilen boyutta (n) belleği sıfırlar. Fonksiyon, void *s parametresi ile belirtilen bellek alanını alır
//ve her bir baytı sıfır (0) ile doldurur.

void   ft_bzero(void *s, size_t n){

    if (!s)
		return ; // null ise  fonksiyon sonlanır. Yani, bzero fonksiyonu hem dolu hem de boş bellek alanlarında kullanılabilir.
    char *ptr = s;
    while (n-- > 0) {
        *ptr++ = 0;
    }
}