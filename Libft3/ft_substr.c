/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alerkul <alerkul@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 00:37:58 by alerkul           #+#    #+#             */
/*   Updated: 2023/12/17 03:42:18 by alerkul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// bir dizenin belirli bir alt dizgesini alır.
//char const *s: Bu, alt dizesi alınacak olan ana dizeyi temsil eder.
//unsigned int start: Bu, alt dizenin başlaması gereken indeksi belirtir.
//size_t len: Bu, alınacak alt dizenin uzunluğunu belirtir.
//#include <stdlib.h>
#include "libft.h"
char    *ft_substr(char const   *s, unsigned int    start, size_t   len)
{
    char *sub;
    size_t i;

    i = 0;
    if(!s || !(sub = (char *)malloc(sizeof(char) * (len + 1))))
    while(i < len && s[start + i])
    {
        sub[i] = s[start + i];
        i++;
    }
    sub[i] = '\0';
    return sub;
}

/*
int main(){
    char const a[] = "aleynaerkul";
    int b = 4;
    printf("%s",ft_substr(a,b,3));

    //nae

}
*/
