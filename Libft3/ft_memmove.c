/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alerkul <alerkul@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 23:41:48 by alerkul           #+#    #+#             */
/*   Updated: 2023/12/17 00:15:56 by alerkul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//bir bellek bloğunu bir konumdan diğerine kopyalar1. 
//dst hedef bellek bloğunu, src kaynak bellek bloğunu ve len de kopyalanacak bayt sayısını belirtir
// memmove fonksiyonu verileri önce bir ara belleğe kopyalar, ardından bu bellekten hedefe kopyalar
//bellek blokları arasında birbiriyle çakışan durumları ele alacak şekilde tasarlanmıştır. ft_memmove fonksiyonu da bu çakışma durumunu kontrol eder ve gerekirse geçici bir bellek alanı kullanarak kopyalama işlemi gerçekleştirir.

//`memcpy` fonksiyonu, hedef ve kaynak bellek bloklarının çakışması durumunda tanımsız davranışa neden olabilir.
//Bu nedenle, çakışan bellek blokları arasında veri kopyalamak için `memmove` fonksiyonu kullanılması önerilir.

#include "libft.h"

void    *ft_memmove(void *dst, const void *src, size_t len)
{
		if (!dst && !src)
		return '\0';
	if (dst < src)
		ft_memcpy(dst, src, len);
	else if (dst > src)
	{
		while (len--)
			*((unsigned char *)(dst + len)) = *((unsigned char *)(src + len));
    }
	return (dst);
}


/*
int main()
{
    char source[] = "Hello, World!";
    char destination[50];

    printf("Copied string: %s\n", ft_memmove(destination, source,13));

    return 0;
}
*/