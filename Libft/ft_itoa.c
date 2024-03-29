
#include "libft.h"

static long	ft_bsm(int n)
{
	long	size;

	if (n == 0)
		return (1);
	size = 0;
	if (n < 0)
	{
		size++;
		n = -n;
	}
	while (n != 0)
	{
		n /= 10;
		size++;
	}
	return (size++);
}

char	*ft_itoa(int n)
{
	long	n_long;
	long	length;
	char	*fresh;

	n_long = n;
	length = ft_bsm(n_long);
	fresh = (char *)malloc(sizeof(char) * (length + 1));
	if (!fresh)
		return (0);
	fresh[length] = '\0';
	length--;
	if (n_long < 0)
		n_long = -n_long;
	while (length >= 0)
	{
		fresh[length] = (n_long % 10) + '0';
		length--;
		n_long /= 10;
	}
	if (n < 0)
		fresh[0] = '-';
	return (fresh);
}
