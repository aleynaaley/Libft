/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alerkul <alerkul@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 14:39:24 by alerkul           #+#    #+#             */
/*   Updated: 2023/12/08 14:39:27 by alerkul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//ascıı ye göre int değişkenin değerini alıp küçük harfe dönüştürür 
//tekrar bak
#include "libft.h"

int	ft_tolower(int i)
{
 if (i >= 'A' && i <= 'Z') {
        return i + ('a' - 'A');
    } else {
        return i;
    }
}
