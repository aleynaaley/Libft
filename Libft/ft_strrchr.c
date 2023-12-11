/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alerkul <alerkul@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 23:37:41 by alerkul           #+#    #+#             */
/*   Updated: 2023/12/10 23:37:45 by alerkul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// sağdan başlayarak stringin içince aradığın harf  var ise(bunu da int değer ascii ye göre )
// onun indexini döndürür.
//man de const char oldugu icin oyle yazdin
char    *strrchr(const char *str, int chr ){ 
    const char *son_karakter = NULL;

    while (*str != '\0') {
        if (*str == chr) {
            son_karakter = str;
        }
        str++;
    }
    return (char *)son_karakter;
}


/*
int main() {
    char str[] = "GeeksforGeeks";
    char chr = 'k';

    char *ptr = strrchr(str, chr);

    if (ptr) {
        printf("Last occurrence of %c in %s is at index %ld", chr, str, ptr - str);
    } else {
        printf("%c is not present in %s ", chr, str);
    }

    return 0;
}
*/
