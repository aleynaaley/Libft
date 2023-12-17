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


#include "libft.h"
char    *ft_substr(char const   *s, unsigned int    start, size_t   len)
{
    char *sub;
    size_t i;

i = 0;
    if(!s || !(sub = (char *)malloc(sizeof(char) * (len + 1))))
        return NULL;
    while(i < len && s[start + i])
    {
        sub[i] = s[start + i];
        i++;
    }
    sub[i] = '\0';
    return sub;
}
