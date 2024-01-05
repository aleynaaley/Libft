#bir programın derlenme sürecini otomatikleştirmek için kullanılır. Makefile’lar,
#bir projenin farklı parçalarının nasıl ve ne zaman derleneceğini belirler

#projenin adı
NAME = libft.a                        #libft.a libft.h kütüphanesinin derlenmiş hali 

# Derleme araçları ve bayrakları
CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM				= rm -f

# Kaynak dosyaları ve nesne dosyaları
SRCS = ft_toupper.c ft_tolower.c ft_substr.c ft_strtrim.c ft_strrchr.c ft_strnstr.c ft_strncmp.c ft_strmapi.c ft_strlen.c ft_strlcpy.c
ft_strjoin.c ft_striteri.c ft_strdup.c ft_strchr.c ft_strlcat.c ft_split.c ft_putstr_fd.c ft_putnbr_fd.c ft_putendl_fd.c ft_putchar_fd.c
ft_memset.c ft_memmove.c ft_memcpy.c ft_memcmp.c ft_memchr.c ft_itoa.c ft_ isprint.c ft_isdigit.c ft_isascii.c ft_isalpha.c ft_isalnum.c
ft_calloc.c ft_bzero.c ft_atoi.c 
OBJS = $(SRCS:.c=.o)           #Bu bir tip dönüşüm, genellikle bir programın tüm kaynak dosyalarını nesne dosyalarına dönüştürerek derleme işlemini otomatize etmek için kullanılır

								 
all: $(NAME)                     #all çalırııldığında çalışır ve name e bağlı. all çalışmadan önce name çalışması gerek yani.

$(NAME): $(OBJS)                # bu da aslında nesne dosyalarına objs ye bağlı nesne dosyaları da src den türetilir.
	ar rc $(NAME) $(OBJS)        
# $(NAME) hedefinin, $(OBJS) nesne dosyalarına bağlı olarak nasıl oluşturulacağını belirtir.

# Temizleme kuralları . derleme işlemi sonrasında oluşan dosyaları temizler  . "make clean "komutu ile çalışır 
clean:
	$(RM) $(OBJS)                      
#m -f komutu, dosyaları silerken hata vermemesi için kullanılır
 
fclean: clean              #bağımlı clean a yani make fclean yapınca önce clean çalışır ve derleme sürecinde oluşturulan derlenmiş kütüphane olan libft.a silinir
	$(RM) $(NAME)

re: fclean all            #siler ve yeniden derler

.PHONY: all re fclean clean
#Makefile içinde kullanıldığında belirli hedeflerin dosya adları olmadığını, yani bu hedeflerin gerçek dosya adları olmadığını belirtir


#proje dosyalarının güncellendiğinde sadece değişen dosyaların tekrar derlenmesini sağlayarak zaman ve kaynak tasarrufu yapılmasına yardımcı olabilir

#$(NAME): Bu, hedefin adını temsil eder, yani libft.a kütüphanesini ifade eder.

#$(OBJS): Bu, hedefin bağımlılıklarını temsil eder, yani libft.a'yı oluşturmak için kullanılacak olan nesne dosyalarını ifade eder.

#ar rc $(NAME) $(OBJS): Bu ifade, ar komutunu ve onun rc seçeneklerini kullanarak $(NAME) (yani libft.a) dosyasını $(OBJS) nesne dosyalarına dayanarak oluşturmayı belirtir. ar komutu, arşiv dosyalarını (genellikle kütüphaneler) oluşturmak veya değiştirmek için kullanılır.

#Bu komutun ayrıntıları şu şekildedir:

#ar: Arşiv (archive) işlemleri gerçekleştiren bir komuttur.
#rc: r seçeneği, arşiv dosyasına dosyalar eklemek için kullanılır. c seçeneği ise arşiv dosyasını oluşturur.
#Sonuç olarak, bu satır, libft.a kütüphanesini $(OBJS) nesne dosyalarına dayanarak oluşturmak için kullanılan bir kuraldır


#"Derlemek" genellikle kaynak kodu, yani insanlar tarafından yazılan yüksek seviyeli programlama dillerinde yazılmış kodu, bir bilgisayarın anlayabileceği düşük seviyeli bir formata çevirme işlemidir.