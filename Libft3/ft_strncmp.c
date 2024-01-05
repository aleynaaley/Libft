/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stncmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alerkul <alerkul@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 13:49:12 by alerkul           #+#    #+#             */
/*   Updated: 2023/12/08 13:49:16 by alerkul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//iki diziyi n karakter kadar karşılaştırır.s1 s2 den küçükse negatif deger
//eşitse 0 büyükse pozitif değer döndürür
// const char bu dizinin fonksiyon içerisinde değiştirelemeyeceği anlamına geliyor
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n){
  		size_t	i;

	if (n == 0)
		return (0);
	i = 0;
		while (s1[i] == s2[i] && s1[i] != '\0')
	{
		if (i < (n - 1))
			i++;
		else
			return (0);
	}
	return ((unsigned char)(s1[i]) - (unsigned char)(s2[i]));  //değerin taşmasını önlemek overflow neagtif değer almaması için yapıyoruz
}


/*
int main(){
    char a[] = "aleynaerkul";
    char b[] = "aleyerkul";
    printf("%d",ft_strncmp(a,b,4));
}
*/