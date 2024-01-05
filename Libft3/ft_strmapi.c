/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alerkul <alerkul@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 11:16:39 by alerkul           #+#    #+#             */
/*   Updated: 2023/12/17 11:23:45 by alerkul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//Verilen stringin her bir karakteri üzerinde belirli bir işlemi uygulayarak yeni bir string oluşturan fonksiyon.

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char)) //const char ile char const aynı . f fonksiyon ne işlem yapığı belirsiz belirte bilirsin fark etmez
{
    unsigned int	i;
	char			*str;

	if (!s)
		return (NULL);
	i = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s)) + 1);
	if (str == NULL)
		return (NULL);
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}


/*
char toUpperCase(unsigned int index, char ch) {
    if (ch >= 'a' && ch <= 'z') {
        return ch - ('a' - 'A');
    }
    return ch;
}

int main() {
    const char input[] = "Hello, World!";

    // ft_strmapi fonksiyonunu kullanarak her karakteri büyük harfe dönüştür
    char *result = ft_strmapi(input, toUpperCase);

    // Sonucu yazdır
    printf("Original String: %s\n", input);
    printf("Modified String: %s\n", result);

    // Bellekten tahsis edilen alanı serbest bırak
    free(result);

    return 0;
}
*/