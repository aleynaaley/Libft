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

//eğer o karakter büyük harfse küçük harfe çevirir. Eğer girilen karakter
//zaten küçük harf veya harf değilse, değişiklik yapmadan karakteri geri döndürür

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return c + 32;
	return c;   
}
