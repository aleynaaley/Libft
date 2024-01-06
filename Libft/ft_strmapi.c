
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	if (!s)
		return (NULL);
	i = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s)) + 1);
	if (str == NULL)
		return (NULL);
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
char aley(unsigned int index,char a){
    a += 1;
    return (a); 
}

 int main(){
    char *result;
    char v[]= "aley";
    result = ft_strmapi(v,aley);
    printf("%s", result);
}