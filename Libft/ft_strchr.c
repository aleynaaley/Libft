/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alerkul <alerkul@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 08:17:15 by alerkul           #+#    #+#             */
/*   Updated: 2023/12/11 08:17:17 by alerkul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
// bir karakter dizisinde (const char *s) belirli bir karakteri (int c) arar ve bu karakterin dizideki ilk görüldüğü yerin adresini döndürür.

char    *strchr(const char *s, int c){
    while (*s != '\0') {
        if (*s == (char)c) {
            return (char *)s;
        }
        s++;
    }
    if (c == '\0') {
        return (char *)s;
    }
    return NULL;
}