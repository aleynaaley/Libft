/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alerkul <alerkul@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 03:58:29 by alerkul           #+#    #+#             */
/*   Updated: 2023/12/17 04:08:49 by alerkul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//substr:bir dizenin belirli bir alt dizgesini alır. belirli yerden itibaren yazdırır. aleynadan eyn gibi .string döndürür.
//bir dizinin sonundaki ve başındaki istenilen karakterleri siiler 

#include "libft.h"

static int	ft_strchrchr(char const *set, int c)  //subject de fonkdiyonlarda yardımcı fonk ları static tanımla demiş
{
	while (*set != '\0')
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*a;                                                      //sonuç için
	int		len;
	len = ft_strlen(s1);
	while (*s1 != '\0' && ft_strchrchr(set, *s1))  //aranan setstringin başından itibaren var mı nereye kadar varsa o kadar ilerletilir ve devam edilir
	{
		s1++;
		len--;
	}
	while (len != 0 && ft_strchrchr(set, s1[len - 1])) //sona gelindi mi onu kontrol ediyoruz len =! 0 ile sondan başlar kontrol etmeye eşitse leni bir azaltır azalttıkça sondan siler 
		len--;
	a = ft_substr(s1, 0, len);
	return (a);
}

/*int main() {
    // Test case 1
    const char *str1 = "   Hello, World!   ";
    const char *set1 = " ";
    char *trimmed_str1 = ft_strtrim(str1, set1);
    printf("Original: \"%s\"\n", str1);
    printf("Trimmed: \"%s\"\n", trimmed_str1);
}
*/


