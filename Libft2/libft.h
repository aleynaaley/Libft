#ifndef LIBFT_H              //eger boyle bir kuutphane tanimli degilse
#define LIBFT_H              // tanimla

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>


// diğer fonksiyonlarda kullandığın kütüphaneleri include etmelisin



// kullandigin fonksiyonlarin prototiplerini yaz 
//kutuphanenin icerigini tanimliyoruz 
//typelari yazmak yeterli 

int	ft_toupper(int c);
int	ft_tolower(int c);


char *ft_strrchr(const char *str, int c);



#endif                     //bitis


//header ile aynı isme ait bir dosya olmali 
//compile ederken isimleri birlikte ver
