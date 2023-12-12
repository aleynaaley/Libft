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
//oluşumunu arar, ancak belirli bir uzunluk (len) ile sınırlıdır.çinde bulunursa, needle’ın ilk karakterinin haystack içindeki 
//adresini döndürür. Eğer bulunamazsa NULL döndürür 

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t	a;
	size_t	b;

	if (!haystack || !needle)
		return (NULL);
	if (!needle || !needle[0])
		return ((char*)haystack);
	a = 0;
	while (haystack[a] && a < len)
	{
		b = 0;
		while (haystack[a + b] && needle[b] &&
				a + b < len && haystack[a + b] == needle[b])
			b++;
		if (!needle[b])
			return ((char*)(haystack + a));
		a++;
	}
	return (NULL);
}
//tekrar bak