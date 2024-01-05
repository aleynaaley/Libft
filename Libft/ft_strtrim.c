/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alerkul <alerkul@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 03:58:29 by alerkul           #+#    #+#             */
/*   Updated: 2024/01/05 14:37:44 by alerkul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_strchrchr(char const *set, int c)
{
	while (*set != '\0')
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*a;
	int		len;

	len = ft_strlen(s1);
	while (*s1 != '\0' && ft_strchrchr(set, *s1))
	{
		s1++;
		len--;
	}
	while (len != 0 && ft_strchrchr(set, s1[len - 1]))
		len--;
	a = ft_substr(s1, 0, len);
	return (a);
}
