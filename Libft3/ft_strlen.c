/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alerkul <alerkul@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 13:23:05 by alerkul           #+#    #+#             */
/*   Updated: 2023/12/08 13:23:43 by alerkul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//size_t değişken türü unsigned tam sayı tipi yani nesnelerin boyutunu byte cinsinden ifade eder ve negatif değer almaz.döngülerde sıklıkla kullanılır.
//verilen karakterin uzunluğunu döndüren fonksiyon

#include "libft.h"

size_t	ft_strlen(const char *s) {
    size_t length = 0;
    while (s[length] != '\0') {
        length++;
    }
    return length;
}


/*
int main(){
    const char a[] = "aley";
    printf("%d",ft_strlen(a));
}
*/