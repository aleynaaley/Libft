

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (!dst && !src)
		return (0);
	if (dst < src)
		ft_memcpy(dst, src, len);
	else if (dst > src)
	{
		while (len--)
			*((unsigned char *)(dst + len)) = *((unsigned char *)(src + len));
	}
	return (dst);
}

#include <stdio.h>
#include <stdlib.h>

void *ft_memcpy(void *dst, const void *src, size_t n) {
    size_t i;

    if (!dst && !src)
        return dst;

    if (dst < src) {
        // Örtüşme durumu, ters yönde kopyalama yap
        for (i = 0; i < n; i++) {
            ((unsigned char *)dst)[i] = ((const unsigned char *)src)[i];
        }
    } else {
        // Örtüşme durumu, ters yönde kopyalama yap
        for (i = n; i > 0; i--) {
            ((unsigned char *)dst)[i - 1] = ((const unsigned char *)src)[i - 1];
        }
    }

    return dst;
}

int main() {
    // Örtüşmeyen durum
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[5];

    ft_memcpy(arr2, arr1, sizeof(arr1));

    printf("Non-overlapping scenario:\n");
    printf("Original array: ");
    for (size_t i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++) {
        printf("%d ", arr1[i]);
    }

    printf("\nCopied array  : ");
    for (size_t i = 0; i < sizeof(arr2) / sizeof(arr2[0]); i++) {
        printf("%d ", arr2[i]);
    }

    printf("\n\n");

    // Örtüşen durum
    int arr3[] = {1, 2, 3, 4, 5};
    ft_memcpy(arr3 + 1, arr3, sizeof(arr3) - sizeof(int));

    printf("Overlapping scenario:\n");
    printf("Original array: ");
    for (size_t i = 0; i < sizeof(arr3) / sizeof(arr3[0]); i++) {
        printf("%d ", arr3[i]);
    }

    printf("\n");

    return 0;
}
