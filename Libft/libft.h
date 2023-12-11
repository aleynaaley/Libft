#ifndef LIBFT_H              //eger boyle bir kuutphane tanimli degilse
#define LIBFT_H              // tanimla

// kullandigin fonksiyonlarin prototiplerini yaz 
//kutuphanenin icerigini tanimliyoruz 

  //typelari yazmak yeterli

int ft_tolower(int c);
int	strncmp(const char *s1, const char *s2, size_t n);
int memcmp(const void *s1, const void *s2, size_t n);
int    isprint(int c);
int isdigit(int c);
int isascii(int c);
int	isalpha(int c);
int isalnum(int c);
int	atoi(const char *str);

char *strdup(const char *s1);
char    *strrchr(const char *str, int chr );
char    *strnstr(const char *haystack, const char *needle, size_t len);
char	ft_toupper(int c);
char    *strchr(const char *s, int c);

void   *memset(void *b, int c, size_t len);
void    *memmove(void *dst, const void *src, size_t len);
void    *memcpy(void *restrict dst, const void *restrict src, size_t n);
void    *memchr(const void *s, int c, size_t n);
void    *calloc(size_t count, size_t size);
void   bzero(void *s, size_t n);

size_t strlcpy(char * restrict dst, const char * restrict src, size_t dstsize);
size_t	strlen(const char *s); 
size_t	strlcat(char * restrict dst, const char * restrict src, size_t dstsize);


#endif                     //bitis


//header ile aynı isme ait bir dosya olmali 
//compile ederke isimleri birlikte ver
