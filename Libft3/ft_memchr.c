/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alerkul <alerkul@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 23:40:44 by alerkul           #+#    #+#             */
/*   Updated: 2023/12/17 00:17:21 by alerkul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//belirli bir bellek bloğu içinde, belirtilen bir değeri (c) arar. Fonksiyon, bellek bloğu içinde n adet byte üzerinde bir tarama yapar ve ilk olarak bulduğu değerin adresini döndürür.

#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{	
	size_t	i;

	if (!s)
		return '\0';
	i = 0;
	while (i < n)
	{
		if (*(unsigned char *)s == (unsigned char)c) //işaretli ve işaretsiz karakter türleri arasında uyumsuzluk olabileceğinden bu tip dönüşümü yaparak beklenmeyen sonuçları önlemek
			return ((void *)s);
		++s;             //çıktıda fark etmiyor sadece bir kere kullanıldığı için 
		i++;
	}
	return (0);  
}

/*

int main(void) {
    const char str[] = "https://www.tutorialspoint.com";
    const char ch = '.';
    char *ret;
    ret = memchr(str, ch, strlen(str));
    printf("String after |%c| is - |%s|\n", ch, ret);
    return 0;
} 
*/



//C dilinde, "bellek bloğu" genellikle void işaretçileri (void *) aracılığıyla temsil edilir. Bu sayede, bellek bloğunun içeriği üzerinde belirli bir veri türüne bağlı olmaksızın işlemler gerçekleştirilebilir.