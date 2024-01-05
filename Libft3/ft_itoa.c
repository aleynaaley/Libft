/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alerkul <alerkul@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 11:17:01 by alerkul           #+#    #+#             */
/*   Updated: 2023/12/17 11:38:27 by alerkul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//bir tamsayıyı (int) alan ve bu tamsayıyı bir karakter dizisine (string) dönüştüren fonk
#include "libft.h"


static long	ft_bsm(int n)
{
	long	size;

	if (n == 0)
		return (1);
	size = 0;
	if (n < 0)         //negatif ise pozitif yaptık size bir atttırıp sayıya geçti
	{
		size++;
		n = -n;
	}
	while (n != 0)
	{
		n /= 10;                     
		size++;
	}
	return (size++);
}                               //negatifse stringde yer tutabilmek için bir fazla olmalı

static int	ft_sign(int n)
{
	if (n < 0)
		return (1);
	return (0);
}

char	*ft_itoa(int n)
{
	long	n_long;
	long	length;
	char	*fresh;

	n_long = n;
	length = ft_bsm(n_long);
	fresh = (char *)malloc(sizeof(char) * (length + 1));
	if (!fresh)
		return '\0';
	fresh[length] = '\0';
	length--;
	if (n_long < 0)
		n_long = -n_long;
	while (length >= 0)
	{
		fresh[length] = (n_long % 10) + '0';
		length--;
		n_long /= 10;
	}
	if (ft_sign(n))
		fresh[0] = '-';
	return (fresh);
}


/*
int main(){
    int a = -121312;
    int b = 789;
    int c = -789;
    printf("%s\n", ft_itoa(a));
    printf("%s\n", ft_itoa(b));
    printf("%s\n", ft_itoa(c));
}
*/