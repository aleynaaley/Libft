/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alerkul <alerkul@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 13:23:05 by alerkul           #+#    #+#             */
/*   Updated: 2023/12/08 13:23:43 by alerkul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//verilen karakterin uzunluğunu döndüren fonksiyon
#include "libft.h"

int	ft_strlen(char *str)
{
	int	karakter;

	karakter = 0;
	while (str[karakter])
	{
		karakter++;
	}
	return (karakter);
}

