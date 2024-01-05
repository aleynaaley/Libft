/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alerkul <alerkul@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 00:43:11 by alerkul           #+#    #+#             */
/*   Updated: 2023/12/17 03:39:45 by alerkul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//iki diziyi yan yana yazdırır ve onu döndürür
#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
    int i;
    int j;
    char *str;

    i = 0;
    j = 0;
    if (!s1 || !s2)
		return (0);
    str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
    if(str == '\0')
        return '\0';
    while(s1[i] != '\0') 
    {
        str[i] = ((unsigned char *)s1)[i];
        i++;
    }
    while(s2[j] != '\0') 
    {
        str[i + j] = ((unsigned char *)s2)[j];
        j++;
    }
    str[i + j] = '\0';
    return(str);
}
/*
int main(){
    char a[] = "kare kafa ";
    char b[] = "yasin";
    printf("%s",ft_strjoin(a,b));
}
*/
