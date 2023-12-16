/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alerkul <alerkul@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 23:40:56 by alerkul           #+#    #+#             */
/*   Updated: 2023/12/10 23:40:57 by alerkul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//belirli bir değerle bellek bloğunu doldurmak için kullanılır
//*b doldurulacak bellek bloğunun başlangıç adresidir.
//c doldurulacak değerdir.
//len doldurulacak bayt sayısıdır

//, b’nin adresini p adlı bir unsigned char işaretçisine atıyoruz. unsigned char kullanmamızın nedeni, 
//memset fonksiyonunun genellikle bayt bayt işlem yapmasıdır ve unsigned char bir bayt büyüklüğündedir

void   *ft_memset(void *b, int c, size_t len){
    unsigned char *p = b;
    while(len--)
        *p++ = (unsigned char)c;
    return b;
}