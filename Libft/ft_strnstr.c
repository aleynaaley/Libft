
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!needle[0])
		return ((char *)&haystack[i]);
	while (haystack[i] && i < len)
	{
		while (haystack[i + j] == needle[j] && needle[j] && (i + j) < len)
			j++;
		if (!needle[j])
			return ((char *)&haystack[i]);
		j = 0;
		i++;
	}
	return (0);
}
