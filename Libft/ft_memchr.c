/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alerkul <alerkul@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 23:40:44 by alerkul           #+#    #+#             */
/*   Updated: 2024/01/05 14:35:15 by alerkul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	if (!s)
		return (0);
	i = 0;
	while (i < n)
	{
		if (*(unsigned char *)s == (unsigned char)c)
			return ((void *)s);
		++s;
		i++;
	}
	return (0);
}
