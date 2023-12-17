#bir programın derlenme sürecini otomatikleştirmek için kullanılır1. Makefile’lar,
#bir projenin farklı parçalarının nasıl ve ne zaman derleneceğini belirler
#



# Proje adı
NAME = libft.a

# Derleme araçları ve bayrakları
CC = gcc
CFLAGS = -Wall -Wextra -Werror

# Kaynak dosyaları ve nesne dosyaları
SRCS = main.c ft_toupper.c ft_tolower.c ft_strrchr.c ft_memset.c
OBJS = $(SRCS:.c=.o)

# Bonus dosyaları ve bonus nesne dosyaları
BONUS_SRCS = bonus_main.c bonus_func.c
BONUS_OBJS = $(BONUS_SRCS:.c=.o)

# Kütüphane dosyaları ve kütüphane nesne dosyaları (örnekte libft kullanıldı)
LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a

# Derleme kuralları. libft kütüphanesini derler
all: $(LIBFT) $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS) -L$(LIBFT_DIR) -lft

$(LIBFT):
	make -C $(LIBFT_DIR)

bonus: $(LIBFT) $(BONUS_OBJS)
	$(CC) $(CFLAGS) -o $(NAME)_bonus $(BONUS_OBJS) -L$(LIBFT_DIR) -lft

# Temizleme kuralları
clean:
	rm -f $(OBJS) $(BONUS_OBJS)
	make -C $(LIBFT_DIR) clean

fclean: clean
	rm -f $(NAME) $(NAME)_bonus
	make -C $(LIBFT_DIR) fclean

re: fclean all

.PHONY: all clean fclean re bonus