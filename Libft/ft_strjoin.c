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


#include "libft.h"
char    *ft_strjoin(char cons *s1, char const *s2)
{
    int i;
    int j;
    char *str;

    i = 0;
    j = 0;
    str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
    if(str == NULL)
        return NULL;
    while(s1[i] != NULL) 
    {
        str[i] = s1[i];
        i++;
    }
    while(s2[j] != NULL) 
    {
        str[i + j] = s2[j];
        j++;
    }
    str[i + j] = NULL;
    return(str);
}
