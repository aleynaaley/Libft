/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stncmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alerkul <alerkul@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 13:49:12 by alerkul           #+#    #+#             */
/*   Updated: 2023/12/08 13:49:16 by alerkul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//kontrol edilmedi 

#include "libft.h"

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	a;

	a = 0;
	while (a < n && s1[a] != '\0' && s2[a] != '\0' && s1[a] == s2[a])
	{
		a++;
	}
	if (a == n)
		return (0);
	return (s1[a] - s2[a]);
}


int	strncmp(const char *s1, const char *s2, size_t n){

	
}