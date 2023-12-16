/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alerkul <alerkul@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 23:41:48 by alerkul           #+#    #+#             */
/*   Updated: 2023/12/10 23:41:51 by alerkul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//bir bellek bloğunu bir konumdan diğerine kopyalar1. B 
//dst hedef bellek bloğunu, src kaynak bellek bloğunu ve len de kopyalanacak bayt sayısını belirtir
// memmove fonksiyonu verileri önce bir ara belleğe kopyalar, ardından bu bellekten hedefe kopyalar
void    *ft_memmove(void *dst, const void *src, size_t len){
    char *d = dst;
    const char *s = src;   //src’nin bir sabit olduğunu belirtmektir. const anahtar kelimesi, bir değişkenin değerinin değiştirilemeyeceğini belirtir
    if (src < dst && dst < src + len) {
        /* Have to copy backwards */
        s += len;
        d += len;
        while (len--) {
            *--d = *--s;
        }
    } else {
        while (len--) {
            *d++ = *s++;
        }
    }
    return dst;
}