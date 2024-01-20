# LİBFT KÜTÜPHANESİ

Bu proje, C dilinde yazılmış kendi özel kütüphanemi içermektedir. Kütüphane, çeşitli işlevleri içeren `libft` adlı bir başlık dosyası ile birlikte gelir.Derleme işlemini otomatikleştirmek için bir de MAKEFİLE dosyası içerir.

## İçindekiler

- [Kurulum](#kurulum)
- [Kullanım](#kullanım)
- [Dahil Olan Fonksiyonlar](#dahil-olan-fonksiyonlar)
- [Yapılandırma](#yapılandırma)
- [Katılım](#katılım)
- [Lisans](#lisans)

## Kurulum

Proje kütüphanesini kullanmak için aşağıdaki adımları izleyebilirsiniz:

1. Projeyi klonlayın: 
    ```bash
    git clone https://github.com/kullanici/proje.git
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

## Dahil Olan Fonksiyonlar

Proje kütüphanesi içinde şu ana fonksiyonlar bulunmaktadır:

- `ft_strlen`: String uzunluğunu hesaplar.
- `ft_strcpy`: Bir stringi başka bir stringe kopyalar.
- ...
- ...

(Tüm fonksiyonları ve kullanımlarını buraya ekleyebilirsiniz.)

## Yapılandırma
