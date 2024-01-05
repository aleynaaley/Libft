/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alerkul <alerkul@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 23:40:31 by alerkul           #+#    #+#             */
/*   Updated: 2023/12/16 23:35:18 by alerkul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//asciye göre yazdırılabilir olup olmadığına bakıyor

#include "libft.h"

int    ft_isprint(int c)
{
    if(c >= 32 && c <= 126)
        return 1;
    else
        return 0;
}

/*
int main(){
    a = 99;
    printf("%d", ft_isprint(a));
}
*/