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

//firdininki çok farklı hiç bakma
#include "libft.h"
int ft_memcmp(const void *s1, const void *s2, size_t n){
    unsigned char	*ptr;
	unsigned char	*ptr1;

	if (n == 0)
		return (0);
	ptr = (unsigned char *)s1;
	ptr1 = (unsigned char *)s2;
	while ((*ptr == *ptr1) && n - 1 > 0)
	{
		ptr++;
		ptr1++;
		n--;
	}
	return ((int)(*ptr - *ptr1));
    
}