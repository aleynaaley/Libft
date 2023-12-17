/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alerkul <alerkul@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 03:58:29 by alerkul           #+#    #+#             */
/*   Updated: 2023/12/17 04:08:49 by alerkul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
    size_t i;

    if(s1 == NULL && set == NULL)
        return 0;
    while(*s1 != 0 && ft_strchr(*s1, set))
    {
        s1++;
    }
    i = ft_strlen(s1);
    while(i > 0 && ft_strchr(s1[i],set))
        i--;
    return(ft_substr(s1, 0, i +1));
}
