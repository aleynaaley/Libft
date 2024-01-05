/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_srtlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alerkul <alerkul@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 14:19:52 by alerkul           #+#    #+#             */
/*   Updated: 2023/12/08 14:19:57 by alerkul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//bir kaynak dizesini (src) bir hedef dizesine (dst) ekler return olarak dst ve src nin uzunluğunu döndürür

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dlen;
	size_t	slen;

	dlen = ft_strlen(dst);
	slen = ft_strlen((char *)src);
	i = 0;
	if (dstsize <= dlen)
	{
		return (dstsize + slen);
	}
	while (src[i] != '\0' && dlen + i + 1 < dstsize)
	{
		dst[dlen + i] = src[i];
		i++;
	}
	dst[dlen + i] = '\0';
	return (dlen + slen);
}

/*int main(){
    char a[] = "aleyna";
    char b[] = "yasin";
    printf("%d",ft_strlcat(a,b,4));
}*/