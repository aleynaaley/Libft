/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alerkul <alerkul@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 23:38:15 by alerkul           #+#    #+#             */
/*   Updated: 2024/01/05 14:43:20 by alerkul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int	i;
	unsigned int	a;

	a = ft_strlen(needle);
	if (a == 0)
		return ((char *)haystack);
	if (len == 0)
		return (0);
	i = 0;
	while (i <= (len - a) && haystack[i] != '\0')
	{
		if (ft_strncmp(&haystack[i], needle, a) == 0)
			return ((char *)&haystack[i]);
		i++;
	}
	return (0);
}
