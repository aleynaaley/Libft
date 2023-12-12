/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alerkul <alerkul@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 08:16:53 by alerkul           #+#    #+#             */
/*   Updated: 2023/12/11 08:16:55 by alerkul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//src dizisindeki karakterleri dst e atar

size_t strlcpy(char * restrict dst, const char * restrict src, size_t dstsize){
    size_t src_len = 0;
    while (src[src_len] != '\0') {
        src_len++;
    }
    if (dstsize == 0) {
        return src_len;
    }
    size_t i = 0;
    while (i < (dstsize - 1) && src[i] != '\0') {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    
    return src_len;
}
