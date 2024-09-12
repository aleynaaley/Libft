# Libft Kütüphanesi

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
- `ft_strnstr`:
- `ft_split`:
- `ft_strjoin`:
- `ft_strmapi`:
- `ft_strncmp`:
- `ft_striteri`:
- `ft_memset`:
- `ft_memcpy`:
- `ft_memmove`:
- `ft_putchar_fd`:
- `ft_putstr_fd`:



# 👤 İnsan Yüzü Algılama ve Tanıma Projesi 

Bu proje, **YOLO** modelini kullanarak iş yerindeki personelleri ve müşterileri algılayıp, bulundukları süre boyunca veriyi toplama amacını taşımaktadır.

## 🎯 Proje Hedefi
- Personelleri yüz tanıma yoluyla algılayıp izlemek.
- Müşterilerin varlığını algılayıp, bulundukları süreyi takip etmek.

---

## ⚙️ Karşılaşılan Zorluklar ve Çözümleri

### 1. Veri Seti Yetersizliği
Başlangıçta veri seti yeterince çeşitli olmadığı için personeller arası karışıklıklar yaşandı.

**Çözüm:**
- 📈 Veri setine daha fazla resim eklendi.
- 🖼️ Resimlerin bazıları üzerinde renk ve eğim gibi düzenlemeler yapılarak çeşitlilik artırıldı.

Bu sayede personel tanıma başarısı önemli ölçüde arttı.

### 2. Model Eğitim Süresi
Google Colab üzerinden model eğitimi sırasında GPU kullanım süresinin sınırlı olması, yerel bilgisayarda ise eğitimin uzun sürmesi gibi sorunlarla karşılaşıldı.

**Çözüm:**
- 🔄 Farklı Google hesaplarıyla eğitimlere devam edildi, ancak bu sadece geçici bir çözüm oldu.

### 3. Personel ve Müşteri Karışıklığı
YOLOv8 modeli, müşterileri personel olarak algılama ya da bir kişiyi hem müşteri hem personel olarak sınıflandırma sorunları yaşattı.

**Çözüm:**
- 🟦 **YOLOv8** ile sadece yüz algılama yapıldı.
- 💡 Yüz tanıma aşamasında **FaceNet** ve **KNN** algoritmaları kullanıldı. Bu, karışıklığı büyük ölçüde giderdi.

---

## 🔨 Geliştirme Aşamaları

1. **Veri Seti Toplama:**  
   Kaggle'dan insan yüzü veri seti toplandı.  
   [Kaggle Veri Seti](https://www.kaggle.com/datasets/ashwingupta3012/human-faces/data)

2. **Veri Seti Oluşturma:**  
   Roboflow platformunda 200'e yakın yeni veri eklenerek eğitim seti oluşturuldu.  
   [Roboflow](https://roboflow.com/)

3. **Model Eğitimi:**  
   Google Colab üzerinde **YOLOv8n.pt** modeli kullanılarak eğitim yapıldı.  
   [Colab Eğitim Not Defteri](https://colab.research.google.com/github/roboflow-ai/notebooks/blob/main/notebooks/train-yolov8-object-detection-on-custom-dataset.ipynb#scrollTo=D2YkphuiaE7_)

4. **Model Değerlendirme:**  
   En iyi sonuç veren modeller seçildi, yetersiz kalanlar için ek eğitimler yapıldı.

5. **Gerçek Zamanlı Yüz Tanıma:**  
   Personel yüzleri toplanarak **FaceNet** ile embedding formatına dönüştürüldü ve **KNN** algoritması ile tanımlandı.

6. **Kişi Takibi:**  
   **DeepSORT** algoritması kullanılarak kişilerin takibi yapıldı, ID atamaları gerçekleştirildi ve sayaçlar güncellendi.

---

## 🎉 Projenin Sonuçları

📌 YOLO modeli ile yüz algılama başarıyla gerçekleştirilmiştir.  
📌 FaceNet ve KNN algoritmaları ile yüz tanıma, DeepSORT ile kişi takibi sağlanmıştır.

---

## 📈 İyileştirme Önerileri

- **KNN** algoritması büyük veri setlerinde yavaşlama yaratabileceğinden, performansı artırmak için **SVM** algoritması tercih edilebilirdi.

---

## 📸 Ekran Görüntüleri


---

## 🔗 Bağlantılar
- [Proje Kaynak Kodu](#)
- [Model Eğitimi için Kullanılan Not Defteri](#)


