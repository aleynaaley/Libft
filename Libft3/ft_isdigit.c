/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alerkul <alerkul@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 23:40:19 by alerkul           #+#    #+#             */
/*   Updated: 2023/12/16 23:35:19 by alerkul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//ascii ye göre rakam mı kontrol eder
#include "libft.h"

int ft_isdigit(int c){
    if(c >= '0' && c <= '9')
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