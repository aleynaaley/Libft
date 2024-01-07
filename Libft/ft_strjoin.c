
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (0);
	str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!str)
		return (0);
	while (s1[i] != '\0')
	{
		str[i] = ((unsigned char *)s1)[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		str[i + j] = ((unsigned char *)s2)[j];
		j++;
	}
	str[i + j] = '\0';
	return (str);
}
