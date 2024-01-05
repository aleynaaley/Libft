/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alerkul <alerkul@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 08:17:15 by alerkul           #+#    #+#             */
/*   Updated: 2023/12/17 03:39:41 by alerkul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//bir karakteri bir dizide olup olmadığını kontrol ediyor ascii değerine göre arar bulduğundan itibaren yazdırır
#include "libft.h"

char    *ft_strchr(const char *s, int c){
    while (*s != '\0') {
        if (*s == (char)c) {
            return (char *)s;
        }
        s++;
    }
    if (c == '\0') {
        return (char *)s; //s const char olduğu için tür değişimi yaptın yapmak zorundasın çünkü fonk char * fonk
    }
    return '\0';
}
/*


int main(){
    char a[] = "acıkkaynakplatformu";
    int b = 102;
    printf("%s", ft_strchr(a,b));
}
*/