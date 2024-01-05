/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alerkul <alerkul@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 11:16:21 by alerkul           #+#    #+#             */
/*   Updated: 2023/12/17 11:38:47 by alerkul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//bir karakter dizisinde (string) bulunan her bir karakter üzerinde belirli bir işlemi uygulamaktır

#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
    }
}


/*

// İşlem fonksiyonu: Karakteri büyük harfe dönüştürür.
void toUpperCase(unsigned int index, char *character)
{
    if (*character >= 'a' && *character <= 'z')
    {
        *character = *character - ('a' - 'A');
    }
}

int main()
{
    char str[] = "Hello, World!";
    
    // ft_striteri fonksiyonu ile her karakteri büyük harfe dönüştür.
    ft_striteri(str, toUpperCase);

    printf("Modified String: %s\n", str);

    return 0;
}
*/
