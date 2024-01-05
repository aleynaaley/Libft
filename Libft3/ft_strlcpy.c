/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alerkul <alerkul@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 08:16:53 by alerkul           #+#    #+#             */
/*   Updated: 2023/12/11 08:16:55 by alerkul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//src dizisindeki karakterleri dst e atar dtsize kadarını ama src uzunluğu döndürür
#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize){
    size_t	i;
    
    i = 0;
	if (dstsize > 0)
	{
		while (src[i] && i < (dstsize - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	while (src[i])
		i++;
	return (i);
}

/*
int main() {
    // Örnek kullanım:
    char destination[10];  // Hedef string
    const char source[] = "Hello, World!";  // Kaynak string

    size_t result = ft_strlcpy(destination, source, sizeof(destination));

    printf("Kaynak: %s\n", source);
    printf("Hedef: %s\n", destination);
    printf("Kopyalanan Karakter Sayısı: %zu\n", result);

    return 0;
} 
*/

// dilinde, bir işaretçinin işaret ettiği bellek bloğunun başka bir işaretçi tarafından aynı anda değiştirilemeyeceğini ifade eden bir belirleyicidir.
// restrict kelimesi, derleyiciye iki işaretçinin işaret ettiği bellek bloğunun birbirine karışmadığını ve her birinin kendi bağlamında güvenli olduğunu söyleyerek performans optimizasyonlarına olanak tanır.