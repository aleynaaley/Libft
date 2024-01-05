/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alerkul <alerkul@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 23:38:15 by alerkul           #+#    #+#             */
/*   Updated: 2023/12/10 23:38:17 by alerkul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//bir karakter dizisi içinde (haystack), başka bir karakter dizisinin (needle) ilk 
//oluşumunu arar, ancak belirli bir uzunluk (len)(aranacak alan) ile sınırlıdır.çinde bulunursa, needle’ın ilk karakterinin haystack içindeki 
//adresini döndürür. Eğer bulunamazsa NULL döndürür 
//size_t değişken türü unsigned tam sayı tipi yani nesnelerin boyutunu byte cinsinden ifade eder ve negatif değer almaz.döngülerde sıklıkla kullanılır. 
#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int	i;
	unsigned int	a;

	a = ft_strlen(needle);   
	if (a == 0)
		return ((char *)haystack);           //başlangıç adresini döndür
	if (len == 0)
		return (NULL);
	i = 0;
	while (i <= (len - a) && haystack[i] != '\0')          //len - a sonraki kalan uzunluk a dan kısa olduğu için armak anlamsız
	{
		if (ft_strncmp(&haystack[i], needle, a) == 0)   //&buişaret pointeri alır o andki indexin 
			return ((char *)&haystack[i]);            
		i++;
	}
	return (NULL);
}
//tekrar bak