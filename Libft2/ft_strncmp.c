/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stncmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alerkul <alerkul@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 13:49:12 by alerkul           #+#    #+#             */
/*   Updated: 2023/12/08 13:49:16 by alerkul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//iki diziyi n karakter kadar karşılaştırır.s1 s2 den küçükse negatif deger
//eşitse 0 büyükse pozitif değer döndürür
// const char bu dizinin konksiyon içerisinde değiştirelemeyeceği anlamına geliyor
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n){
      while (n > 0) {
        if (*s1 != *s2) {
            return (unsigned char)*s1 - (unsigned char)*s2;   //unsigned char her zaman pozitif bir değerdir o yüzden signed char negatif olabilir ve sonucu yanlış etkieyebilri.
            // bunu return ((unsigned char)s1[] - ... şeklinde de yazabilirsin)        
        }
        if (*s1 == '\0') {
            break;
        }
        s1++;
        s2++;
        n--;
    }
    return 0;
}