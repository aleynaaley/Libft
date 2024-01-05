/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alerkul <alerkul@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 08:48:32 by alerkul           #+#    #+#             */
/*   Updated: 2023/12/16 22:29:15 by alerkul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//verilen bir giriş karakter dizisini (s1) kopyalayarak yeni bir bellek bloğu oluşturan ve bu kopyanın başlangıç adresini döndüren bir işleve sahiptir.

#include "libft.h"

char *ft_strdup(const char *s1){
    size_t len;
    char    *cpy;
    size_t i;

    len = ft_strlen(s1);
    cpy = (char *)malloc(sizeof(char) * len + 1);
    if (cpy == '\0') {
        return '\0'; // Bellek ayrılamazsa NULL döndür.
    }
    i = 0;
    while(i < len){
        cpy[i] = s1[i];
        i++;
    }
    cpy[len] = '\0'; // Sonlandırıcı null karakteri ekle.
    
    return cpy; 
}

/*
int main(void) {
    char *str1 = "Hello World";
    char *str2;
    str2 = strdup(str1);
    printf("Original string: %s\n", str1);
    printf("Duplicate string: %s\n", str2);
    return 0;
}

*/