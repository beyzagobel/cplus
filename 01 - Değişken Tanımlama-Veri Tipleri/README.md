# C++ programlamada Değişkenler

Hemen hemen tüm programramlarda değişkenlerle çalışmak zorundayız. O yüzden burada değişken kavramı, C++ dilinde değişken isimlendirme kuralları,
bu değişkenleri nasıl tanımlayıp kullanacağımızı ve C++ dilindeki temel veri türlerini öğreneceğiz.

## 1 - C++ Programlamada Değişken'in Tanımı
- `Değişken(variable)` : Programda kullandığımız dilin izin verdiği tipte verileri bilgisayarın hafızasında sakladığımız bellek hücrelerine denir.
- Bir değişken programda kullanılmadan önce tanımlanmalıdır. Tanımlamayı ise değişkene uygun bir dilde isim verme ve değişkenin hangi tipten olduğunu bildirmeyle yaparız.

> Bizde önce değişkenleri C++ diline uygun nasıl isimlendireceğimizi öğrenelim. Unutmayın ki bu kurallara uygun bir isimlendirme yapmaz isek programımızda
syntax error yani sözdizim hatası alırız ve derleme işlemi başarısız olur.

## 2 - C++ Dili Değişken İsimlendirme Kuralları
- Değişken isimleri anlamlı ve C++ dilinde kullanılan anahtar sözcüklerden(if,for,break,vs) olmamalıdır. Anahtar sözcükler C++ dilindeki komutların isimleridir.
- İlk harf alfabetik (a-z,A-Z) veya alt çizgi karakteri(_) ile başlar.Fakat programcılar genelde alt çizgi ile başlayan değişkenler kullanmazlar çünkü
C++ kütüphanelerini yazan programcılar değişkenlerine alt çizgi ile başlayan isimler verdikleri için çakışmaya yol açabilir.
- İlk harf sayı ile başlayamaz fakat diğer karakterler sayı olabilir.
- Değişken isimleri !,?,{,],# gibi karakterler içeremezler.
- C++ büyük ve küçük harfe duyarlıdır. Örneğin ad ve Ad değişkenleri farklı değişkenlerdir yani farklı bellek hücrelerini tutarlar.
- Değişken isimlerinin arasına boşluk konulmaz. Alt çizgi(_) kullanabilirsiniz.
- örneğin;

| Değişken İsmi  | Geçerli/Geçersiz  | Açıklama |
| :------------ |:---------------:|:-----:|
| ad soyad      | Geçersiz | boşluk kullanılamaz |
| KullaniciAdi      | Geçerli |    |
| kullanici_adi | Geçerli |     | 
| tamsayi! | Geçersiz | ! gibi karakterler kullanılamaz |
| 2sayi | Geçersiz | sayı ile başlayamaz |
| yil2001 |  Geçerli | |
| _sinif_ortalamasi_ | Geçerli | |
| return | Geçersiz | C++ dilindeki anahtar kelimeler kullanılamaz |

> Değişken isimlendirmeyi öğrendiğimize göre şimdi de C++ dilindeki temel veri türlerini (type) öğrenebiliriz.

## C++ Programlamada Temel Veri Tipleri (Basics of Variables for C++ Programming)
- Programdaki veriler bellekte(RAM) depolanır ve kapladıkları alanları `byte(8 bit)` türünden ifade edilir. Bizde veri boyutu ve türüne göre ihtiyacımız olanı kullanırız.
- Aşağıdaki tablodan programda kullandığımız temel veri tipleri, bellekte kapladıkları alanları ve kullanım aralıklarını görebilirsiniz.


| Veri Tipi     | Açıklama     | Bayt   | Aralık     |
| :-----------  |:----------------:|:--------:|:---------------:|
| int           | Tamsayı          | 4 Byte | -32768 ile +32767 arasındaki sayılar |
| float         | Reel Sayı        | 4 Byte | 3.4E-38 ile +3.4E+38 arasındaki reel sayılar |
| Double        | Ondalıklı Sayı   | 8 Byte | -1.7E-308 ile +1.7E+308 arasındaki ondalıklı sayıla |
| char          | Karakter         | 1 Byte |            |
| string        | Karakter Dizisi  |  |            |
| bool          | Mantıksal        | 1 Byte | true / false |

> İsimlendirme kurallarını ve veri tiplerini öğrendikten sonra şimdi gelelim program içerisinde nasıl değişken tanımlanır. 

## C++ Değişken Tanımlama
- Değişkenleri kullanmadan önce mutlaka tanımlamalıyız. Tanımlama yapılırken ;
- `VeriTipi DegiskenAdi ;`  şeklinde tanımlama yapabiliriz ya da;
- `VeriTipi DegiskenAdi = Veri;` şeklinde de değişkene ilk değer atamasınıda yapabiliriz.
- 
- örneğin;

```
int yas;               // bellekte yas değişkeni için int(tamsayı) boyutunda bir yer açılır 
----
int yas=21;            // bellekte yas değişkeni için int(tamsayı) boyutunda bir yer açılır ve bu yere 21 değeri atanır                                         
----
int yas;
yas=21;               // bu şekilde de tanımlanabilir.
----
bool a;
a=4>5;   // a değişkenine; 4, 5'ten büyük ise true, değilse false atanır.

```

- Değişkenlerin sakladıkları verileri değiştirmek için atama komutu (assignment statement) kullanılır. Eşittir(=) operatörüdür.
- örneğin;

```

int a=5;     // a değişkeninin değeri 5 olarak atanmış
a=10;        // a değişkeninin değerini 10 olarak değiştirildi
----
toplam=toplam+5;   // toplam değişkeninin değeri
----
yarim=tam/2;
-----
ucret=mmas-vergi;

```
















