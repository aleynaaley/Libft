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

//bir kaynak dizesini (src) bir hedef dizesine (dst) ekler

#include "libft.h"

size_t ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize){
    size_t srclen = strlen(src);
    size_t dstlen = strlen(dst);
    size_t i = 0;

    if (dstlen < dstsize - 1 && dstsize > 0) {
        while (src[i] != '\0' && dstlen + i < dstsize - 1) {
            dst[dstlen + i] = src[i];
            i++;
        }
        dst[dstlen + i] = '\0';
    }
    if (dstlen >= dstsize)
        dstlen = dstsize - 1;

    return (dstlen + srclen);
}

