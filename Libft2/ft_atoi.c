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
//man de ki haliyle yaz
#include "libft.h"


int	atoi(const char *str){
int	i;
	int	is_neg;
	int	res;

	if (!str)
		return (0);
	i = 0;

	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v' ||
			str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
		i++;
	is_neg = (str[i] == '-') ? -1 : 1;
	
	if (is_neg == -1 || str[i] == '+')
		i++;
	res = 0;

	while (str[i] >= '0' && str[i] <= '9')
		res = (res * 10) + (str[i++] - '0');

	return (res * is_neg);

}