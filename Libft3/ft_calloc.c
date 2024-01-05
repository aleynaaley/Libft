/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alerkul <alerkul@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 08:40:14 by alerkul           #+#    #+#             */
/*   Updated: 2023/12/17 00:15:46 by alerkul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//belirli bir sayıda eleman ve her elemanın boyutu kadar bellek bloğu ayırır. Ardından, bu bellek bloğunu sıfırlar 
//Eğer bellek ayırma işlemi başarılı olursa, tahsis edilen belleğin başlangıç adresini geri döndürür

#include "libft.h"

void    *ft_calloc(size_t count, size_t size)
{
    size_t total_size;
    void *ptr;

    total_size = count * size;
    ptr = malloc(total_size);
    if (!ptr) {
        return NULL;
    }
    ft_bzero(ptr,total_size);
    return ptr;
}