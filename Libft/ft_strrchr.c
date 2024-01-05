/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alerkul <alerkul@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 23:37:41 by alerkul           #+#    #+#             */
/*   Updated: 2024/01/05 18:40:40 by alerkul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	last_chr;

	last_chr = ft_strlen(str);
	while (last_chr >= 0)
	{
		if (*str == (char)c)
			return ((char *)&str[last_chr]);
		last_chr--;
	}
	return (0);
}
