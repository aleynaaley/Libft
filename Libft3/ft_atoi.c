/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alerkul <alerkul@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 14:02:14 by alerkul           #+#    #+#             */
/*   Updated: 2023/12/08 14:14:59 by alerkul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//bir karakter dizisini (string) tamsayıya dönüştürür. 


#include "libft.h"
"      	+456334"

int	ft_atoi(const char *str)
{
	int		i;
	long	num;
	int		sign;

	i = 0;
	num = 0;
	sign = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] && ft_isdigit(str[i]))
	{
		num = (num * 10) + ((str[i] - '0') * sign);
		i++;
		if (num > 2147483647)                               //32 bit tam sayı sınırı
			return (-1);
		if (num < -2147483648)
			return (0);
	}
	return (num);
}

/*
int main(){
	 char a[] = "       ++--++-aley7840";
    char b[] = "   123";
    char c[] = "   -987";
    char d[] = "   2147483647";  // INT_MAX
    char e[] = "   -2147483648"; // INT_MIN
    char f[] = "   2147483648";  // Taşma durumu
    char g[] = "   -2147483649"; // Taşma durumu

    printf("%d\n", ft_atoi(a));  // Beklenen çıktı: 0
    printf("%d\n", ft_atoi(b));  // Beklenen çıktı: 123
    printf("%d\n", ft_atoi(c));  // Beklenen çıktı: -987
    printf("%d\n", ft_atoi(d));  // Beklenen çıktı: 2147483647
    printf("%d\n", ft_atoi(e));  // Beklenen çıktı: -2147483648
    printf("%d\n", ft_atoi(f));  // Beklenen çıktı: -1 (taşma durumu)
    printf("%d\n", ft_atoi(g));  // Beklenen çıktı: 0 (taşma durumu
}
*/