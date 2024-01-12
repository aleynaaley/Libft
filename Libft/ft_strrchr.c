

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
