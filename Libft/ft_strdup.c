
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
