/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alerkul <alerkul@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 23:41:48 by alerkul           #+#    #+#             */
/*   Updated: 2023/12/17 00:15:56 by alerkul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//bir bellek bloğunu bir konumdan diğerine kopyalar1. B 
//dst hedef bellek bloğunu, src kaynak bellek bloğunu ve len de kopyalanacak bayt sayısını belirtir
// memmove fonksiyonu verileri önce bir ara belleğe kopyalar, ardından bu bellekten hedefe kopyalar
#include "libft.h"
void    *ft_memmove(void *dst, const void *src, size_t len){
    char *d;
    char *s;

    d = dst;
    s = src;   //src’nin bir sabit olduğunu belirtmektir. const anahtar kelimesi, bir değişkenin değerinin değiştirilemeyeceğini belirtir
    if (src < dst && dst < src + len) {
        s += len;
        d += len;
        while (len--) {
            *--d = *--s;
        }
    }
    else
    {
        while (len--) {
            *d++ = *s++;
        }
    }
    return dst;
}

/*
void    *ft_memmove(void *dst, const void *src, size_t len){
    char *d;
    char *s;

    d = dst;
    s = src; 
    if(dst == src)
        return (dst)
    if()
    {
        while(len--){
            *(d + len) = *(s + len);
        }
        return dst;
    }
    while(len--)
        *d++ = *s++;
    return dst;
}
*/