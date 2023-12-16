/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alerkul <alerkul@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 08:48:32 by alerkul           #+#    #+#             */
/*   Updated: 2023/12/11 08:48:33 by alerkul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//bir karakter dizisinin (const char *s1) kopyasını oluşturur ve bu kopyanın adresini döndürür. Kopya için gerekli bellek, dinamik olarak malloc kullanılarak ayrılır


char *ft_strdup(const char *s1){
     size_t len = 0;
    while (s1[len] != '\0') {
        len++;
    }
    
    char *copy = (char *)malloc(len + 1);
    if (copy == NULL) {
        return NULL; // Bellek ayrılamazsa NULL döndür.
    }
    size_t i = 0;
    while(i < len){
        copy[i] = s1[i];
        i++;
    }
    copy[len] = '\0'; // Sonlandırıcı null karakteri ekle.
    
    return copy; 
}
