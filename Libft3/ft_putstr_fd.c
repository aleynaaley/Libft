/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alerkul <alerkul@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 09:43:31 by alerkul           #+#    #+#             */
/*   Updated: 2023/12/17 11:23:47 by alerkul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <unistd.h>

//Bu fonksiyonun amacı belirtilen dosya tanımlayıcısına (fd) bir karakter dizisini (s) yazmaktır. fd bir tam sayı genelde 0,1,2 -klavye ,ekran,ekran hata
//bir dtringi belirli bir file descriptora yazdırır. aslında fd verinin nerey gideceğini belirler
void ft_putstr_fd(char *s, int fd)
{
    if(!s)
        return ;                       //fonksiyon hiçbirşey yapmadan sonlanır.                                    
    while (*s != '\0')
	{
		write(fd, &(*s), 1);                 //file descriptor a yazdırıyor
		s++;
	}
}

/*
#include <fcntl.h>  // open fonksiyonu için
#include <unistd.h> // write fonksiyonu için


int main() {
    // Bir dosya oluşturup açma (veya var olan bir dosyayı açma)
    // O_CREAT: Dosya yoksa oluştur
    // O_WRONLY: Yazma izni
    // O_TRUNC: Dosyayı temizle (varsa)
    int file_descriptor = open("ornek_dosya.txt", O_CREAT | O_WRONLY | O_TRUNC, 0644);

    if (file_descriptor == -1) {
        // Dosya oluşturma veya açma hatası
        perror("Dosya oluşturma veya açma hatası");
        return 1; // Programı hata kodu ile sonlandır
    }

    // ft_putstr_fd fonksiyonunu kullanarak dosyaya yazma
    char metin[] = "Bu bir ornek metindir.";
    ft_putstr_fd(metin, file_descriptor);

    // Dosyayı kapatma
    close(file_descriptor);

    return 0; // Programın başarıyla tamamlandığını belirt
}

*/





//Dosya tanımlayıcısı (file descriptor), işletim sistemi tarafından açılan dosya veya girdi/çıktı kaynağını temsil eden bir sayıdır. Bu sayılar, programın işletim sistemine dosya ile etkileşimde bulunabilmesi için kullanılır. Unix benzeri işletim sistemlerinde, dosya tanımlayıcıları genellikle tamsayı değerleridir.

//Standart dosya tanımlayıcıları şunlardır:

//0 (STDIN_FILENO): Standart giriş (klavye)
//1 (STDOUT_FILENO): Standart çıkış (ekran)
//2 (STDERR_FILENO): Standart hata çıkışı (ekran)
//Bunlar, bir programın temel giriş ve çıkış noktalarını temsil eder. write fonksiyonu, belirli bir dosya tanımlayıcısına yazma işlemi gerçekleştirir.

//Örneğin, ft_putstr_fd fonksiyonunda write(fd, s, ft_strlen(s)); satırı ile belirtilen dosya tanımlayıcısına (fd) karakter dizisi (s) yazılır.
 //Bu, yazılan verilerin nereye gideceğini belirler. Eğer fd 1 ise, yazılan veriler standart çıkışa (ekran) gider.
 //Eğer fd farklı bir dosya tanımlayıcısı ise, yazılan veriler o dosyaya yönlendirilir.