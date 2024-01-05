/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alerkul <alerkul@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 23:39:57 by alerkul           #+#    #+#             */
/*   Updated: 2023/12/16 23:35:15 by alerkul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//ascii tabloda geçerli değer olup olmadığını kontrol ediyor
#include "libft.h"

int ft_isascii(int c)
{
    if(c >= 0 && c <= 127)
        return 1;
    else
        return 0;
}
