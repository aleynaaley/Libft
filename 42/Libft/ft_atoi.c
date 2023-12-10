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
//sorun var
#include "libft.h"

int	find(char *ptr, int *ptr_n)
{
	int	x;
	int	i;

	i = 0;
	x = 1;
	while ((ptr[i] >= 9 && ptr[i] <= 13) || ptr[i] == 32)
		i++;
	while (ptr[i] != '\0' && (ptr[i] == 43 || ptr[i] == 45))
	{
		if (ptr[i] == 45)
			x *= -1;
		i++;
	}
	*ptr_n = i;
	return (x);
}

int	ft_atoi(char *str)
{
	int	pn;
	int	res;
	int	a;

	res = 0;
	pn = find(str, &a);
	while (str[a] && str[a] >= 48 && str[a] <= 57)
	{
		res *= 10;
		res += str[a] - 48;
		a++;
	}
	res *= pn;
	return (res);
}