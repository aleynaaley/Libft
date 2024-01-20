#Libft Kütüphanesi

Bu proje, C dilinde yazılmış kendi özel kütüphanemi içermektedir. Kütüphane, çeşitli işlevleri içeren `libft` adlı bir başlık dosyası ile birlikte gelir.Derleme işlemini otomatikleştirmek için bir de MAKEFİLE dosyası içerir.

## MAKEFİLE DOSYASI NEDİR?
Makefile, bir yazılım projesinin derlenmesi ve yönetilmesi için kullanılan bir konfigürasyon dosyasıdır. Makefile, özellikle C ve C++ gibi derleme tabanlı dillerde, projenin derlenme süreçlerini otomatikleştirmek ve kaynak dosyaların, başlık dosyalarının, kütüphanelerin ve derleme seçeneklerinin yönetimini kolaylaştırmak amacıyla kullanılır.

## KURULUM

Proje kütüphanesini kullanmak için aşağıdaki adımları izleyebilirsiniz:

1. Projeyi klonlayın: 
    ```bash
    git clone https://github.com/aleynaaley
    ```

2. Kütüphaneyi derleyin:
    ```bash
    make
    ```

## Kullanım

Proje kütüphanesini kullanmak için aşağıdaki adımları takip edebilirsiniz:

1. `libft.h` başlık dosyasını projenize ekleyin:
    ```c
    #include "libft.h"
    ```

2. Kütüphaneyi derleyin ve projenize bağlayın:
    ```bash
    gcc -o proje proje.c -L. -lft
    ```
    Bu komut, proje.c adlı kaynak kod dosyasını derleyip, proje adlı çalıştırılabilir bir dosya oluştururken, libft kütüphanesini kullanmayı amaçlamaktadır. -L. ifadesi ve -lft ifadesi, derleyiciye bu kütüphanenin mevcut dizinde bulunacağını ve libft adlı dosyanın başına otomatik olarak lib ekleneceğini söyler. Yani, libft.a dosyasını arar.

## Dahil Olan Fonksiyonlar

Proje kütüphanesi içinde şu ana fonksiyonlar bulunmaktadır:

- `ft_strlen`: String uzunluğunu hesaplar.
- `ft_strcpy`: Bir stringi başka bir stringe kopyalar.
- `ft_atoi`: Bir stringi int değere çevirir.
- `ft_bzero`: Bellek bloğunu belirtilen n bayt uzunluğunda sıfırlar.
- `ft_calloc`: Bellek tahsisi yapar ve bu bellek bloğunu belirli bir sayıda eleman ve her elemanın boyutu kadar sıfırlar.
- `ft_itoa`: Bir int değeri stringe döüştürür.
- `ft_substr`:Bir stringde belirtilen konumdan itibaren belirtilen uzunluktaki bir alt dizeyi ayıklar ve bu alt diziyi yeni bir bellek bloğuna kopyalar.
- `ft_strtrim`:Verilen bir stringden belirtilen karakter kümesine ait karakterleri baştan ve sondan temizleyerek yeni bir karakter dizisi oluşturur.

