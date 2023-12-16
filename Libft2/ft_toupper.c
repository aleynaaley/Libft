/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alerkul <alerkul@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 14:42:01 by alerkul           #+#    #+#             */
/*   Updated: 2023/12/08 14:42:04 by alerkul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


//verilen bir karakteri eğer küçük harf ise büyük harfe dönüştürür.
// Eğer karakter zaten büyük harf veya harf değilse, karakteri olduğu gibi bırakır

#include "libft.h"

int	ft_toupper(int c)
{
    if (c >= 'a' && c <= 'z') 
        return c - 32;
    return c;
}
