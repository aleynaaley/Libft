/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alerkul <alerkul@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 08:48:32 by alerkul           #+#    #+#             */
/*   Updated: 2024/01/05 14:36:46 by alerkul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*cpy;
	size_t	i;

	len = ft_strlen(s1);
	cpy = (char *)malloc(sizeof(char) * len + 1);
	if (!cpy)
	{
		return (0);
	}
	i = 0;
	while (i < len)
	{
		cpy[i] = s1[i];
		i++;
	}
	cpy[len] = '\0';
	return (cpy);
}
