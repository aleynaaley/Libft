/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alerkul <alerkul@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 08:48:32 by alerkul           #+#    #+#             */
/*   Updated: 2023/12/16 22:29:15 by alerkul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



char *ft_strdup(const char *s1){
    size_t len;
    char    *copy;
    
    len = ft_strlen(s1);
    copy = (char *)malloc(len + 1);
    if (copy == NULL) {
        return NULL; // Bellek ayrılamazsa NULL döndür.
    }
    size_t i = 0;
    while(i < len){
        copy[i] = s1[i];
        i++;
    }
    copy[len] = '\0'; // Sonlandırıcı null karakteri ekle.
    
    return copy; 
}
