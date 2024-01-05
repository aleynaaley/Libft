/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alerkul <alerkul@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 23:40:56 by alerkul           #+#    #+#             */
/*   Updated: 2023/12/17 00:15:55 by alerkul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//*b doldurulacak bellek bloğunun başlangıç adresidir.
//c doldurulacak değerdir.
//len doldurulacak bayt sayısıdır

//, b’nin adresini p adlı bir unsigned char işaretçisine atıyoruz. unsigned char kullanmamızın nedeni, 
//memset fonksiyonunun genellikle bayt bayt işlem yapmasıdır ve unsigned char bir bayt büyüklüğündedir

#include "libft.h"

void   *ft_memset(void *b, int c, size_t len){
    unsigned char *p;              //b nin türünü değiştirdik işlem karışıklğı olmasın diye ama çalışırdı yine 
    p = (unsigned char *) b;
    while(len--)
        *p++ = (unsigned char) c;
    return b;
}

/*
int main() {
    char str[] = "acikkaynakplatformu";
    printf("%s\n", ft_memset(str, 'x', 5));
}
*/
