
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

}
char aley(unsigned int index,char a){
    a += 1;
    return (a); 
}

 int main(){
    char *result;
    char v[]= "aley";
    result = ft_striteri(v,aley);
    printf("%s", result);
}