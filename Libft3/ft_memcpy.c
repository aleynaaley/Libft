/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alerkul <alerkul@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 08:17:42 by alerkul           #+#    #+#             */
/*   Updated: 2023/12/17 00:15:57 by alerkul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//
#include "libft.h"

void    *ft_memcpy(void *dst, const void *src, size_t n){
    size_t	i;

	i = 0;
	if (!dst && !src)       
		return '\0';
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}

/*
int main(void) {
    char src[] = "Hello World";
    char dest[20];
    printf("Copied string: %s\n", ft_memcpy(src,dest,11));
    return 0;
}
*/