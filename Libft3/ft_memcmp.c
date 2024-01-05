/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alerkul <alerkul@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 23:41:10 by alerkul           #+#    #+#             */
/*   Updated: 2023/12/17 00:15:49 by alerkul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//iki bellek bloğunu (s1 ve s2) karşılaştırır.Bellek bloğu genel olarak bir bellek alanının belirli bir boyutunu ifade eder.
//bir dizi byte'ın yan yana gelmesiyle oluşan bir bölgeyi temsil edebilir
#include "libft.h"
int ft_memcmp(const void *s1, const void *s2, size_t n){
    size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		i++;
	}
	return (0);
}

/*
int main(){
	char a[] = "aleynaerkul";
	char b[] = "aley";
	printf("%d", ft_memcmp(a,b,4));
}

*/