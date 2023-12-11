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

int	ft_tolower(char ch)
{
 if (ch >= 'A' && ch <= 'Z')
	return ch - 'A' + 'a';
else 
	return ch;   
}

//bu da parametrede int olmali