/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alerkul <alerkul@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 11:17:50 by alerkul           #+#    #+#             */
/*   Updated: 2023/12/17 11:38:28 by alerkul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//ft_toklen fonksiyonunu kullanarak kaç kelime olduğunu belirler ve ardından bu kelime sayısı kadar
// bellek tahsis ederek her bir kelimenin başlangıcını ve uzunluğunu ft_substr fonksiyonuyla belirleyip bir dizi oluşturur


#include <stdlib.h>
#include "libft.h"

static size_t	ft_kelen(const char *s, char c) //aslında c den bölünce oluşacak kelime sayısını buluyor e 
{
	size_t	ret;

	ret = 0;
	while (*s)
	{
		if (*s != c)
		{
			++ret;
			while (*s && *s != c)
				++s;
		}
		else
			++s;
	}
	return (ret);
}

char	**ft_split(const char *s, char c)
{
	char	**ret;
	size_t	i;
	size_t	len;

	if (!s)
		return (0);
	i = 0;
	ret = malloc(sizeof(char *) * (ft_kelen(s, c) + 1));
	if (!ret)
		return (0);
	while (*s)
	{
		if (*s != c)
		{
			len = 0;
			while (*s && *s != c && ++len)  //bu ifade çalışmasa da len artar
				++s;
			ret[i++] = ft_substr(s - len, 0, len);
		}
		else
			++s;
	}
	ret[i] = 0;
	return (ret);
}


/*
int main()
{
    const char *input = "merhaba,dunya,nasilsin";
    char separator = ',';
    char **result = ft_split(input, separator);
    for (size_t i = 0; result[i] != NULL; ++i)
    {
        printf("Alt Dize %s\n", result[i]);
    }
    return 0;
}

*/