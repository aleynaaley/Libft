/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alerkul <alerkul@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 14:19:52 by alerkul           #+#    #+#             */
/*   Updated: 2024/01/05 16:42:30 by alerkul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dlen;
	size_t	slen;

	dlen = ft_strlen(dst);
	slen = ft_strlen((char *)src);
	i = 0;
	if (dstsize <= dlen)
	{
		return (dstsize + slen);
	}
	while (src[i] != '\0' && dlen + i + 1 < dstsize)
	{
		dst[dlen + i] = src[i];
		i++;
	}
	dst[dlen + i] = '\0';
	return (dlen + slen);
}
