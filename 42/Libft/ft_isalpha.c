/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alerkul <alerkul@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 14:24:45 by alerkul           #+#    #+#             */
/*   Updated: 2023/12/08 14:24:48 by alerkul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//alfabede A-Z, a-z arasında yer alıp almadığını kontrol eden fonksiyon.

#include "libft.h"

int	ft_isalpha(char *str)
{
	return((str >= 'A'&& str <= 'Z' ) || (str >='a' && str <= 'z'));
}

