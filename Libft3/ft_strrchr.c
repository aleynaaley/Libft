/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alerkul <alerkul@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 23:37:41 by alerkul           #+#    #+#             */
/*   Updated: 2023/12/10 23:37:45 by alerkul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// sağdan başlayarak stringin içince aradığın harf  var ise(bunu da int değer ascii ye göre )
// onun indexini döndürür.eğer aranan yoksa null döndürür
//man de const char oldugu icin oyle yazdin. const char ile char arası fark const değişririlemz 
#include "libft.h"

char *ft_strrchr(const char *str, int c)
{
    const char *last_chr = NULL;

    while (*str)
    {
        if (*str == (char)c)
            last_chr = str;
        str++;
    }
    if (c == '\0')
        return (char *)str;
    return (char *)last_chr;  //adresi döndürmesi için (char*) yazdık cons char * dan char * a dönüştürür  
    //fonksiyon kullanışlı oması için return değeri değiştirelemeyen bir değer const char olması iyi olmaz
}

/*
int main() {
    const char *str = "Hello, World!";
    int charr = 'o';

    char *result = ft_strrchr(str, charr);
    
    printf("%s",ft_strrchr(str,charr));
 
}
*/