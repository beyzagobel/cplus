# C++ programlamada Değişken Tanımlama ve Veri Tipleri

Hemen hemen tüm programramlarda değişkenlerle çalışmak zorundayız. O yüzden burada değişken kavramı, C++ dilinde değişken isimlendirme kuralları,
bu değişkenleri nasıl tanımlayıp kullanacağımızı ve C++ dilindeki temel veri türlerini öğreneceğiz.

## 1 - C++ Programlamada Değişken Tanımı
- Program içinde işlemler yaparken verilerden yararlanırız. Bu işlemlerde kullandığımız verileri bellek hücrelerinde tutarız.
Şöyleki biz nasıl bilgileri hafızamızda tutuyorsak bilgisayarda bizim söylediklerimizi hafızasına(RAM) kaydeder.
- Bu bellek hücrelerinde saklanan veriler değişebileceği için bellek hücrelerine verilen isimlere `değişken(variable)` denir.
- Bir değişken programda kullanılmadan önce tanımlanmalıdır. Tanımlamayı ise değişkene uygun bir dilde isim verme ve değişkenin hangi tipten olduğunu bildirmeyle yaparız.

> Bizde önce değişkenleri C++ diline uygun nasıl isimlendireceğimizi öğrenelim. Unutmayın ki bu kurallara uygun bir isimlendirme yapmaz isek programımızda
syntax error yani sözdizim hatası alırız ve derleme işlemi başarısız olur.

## 2 - C++ Dili Değişken İsimlendirme Kuralları
- Değişken isimleri anlamlı ve C++ dilinde kullanılan anahtar sözcüklerden(if,for,break,vs) olmamalıdır. Anahtar sözcükler C++ dilindeki komutların isimleridir.
Bunları bir sonraki derslerde öğreneceğiz
- İlk harf alfabetik (a-z,A-Z) veya alt çizgi karakteri(_) ile başlar.Fakat programcılar genelde alt çizgi ile başlayan değişkenler kullanmazlar çünkü
C++ kütüphanelerini yazan programcılar değişkenlerine alt çizgi ile başlayan isimler verdikleri için çakışmaya yol açabilir.
- İlk harf sayı ile başlayamaz fakat diğer karakterler sayı olabilir.
- Değişken isimleri !,?,{,],# gibi karakterler içeremezler.
- C++ büyük ve küçük harfe duyarlıdır. Örneğin ad ve Ad değişkenleri farklı değişkenlerdir yani farklı bellek hücrelerini tutarlar.
- Değişken isimleri birden fazla kelime olduğu zaman; kelimelerin arasına boşluk konulmaz. Böyle durumda alt çizgi(_) kullanabilirsiniz.
- örneğin;

| Değişken İsmi  | Geçerli/Geçersiz  | Açıklama |
| :------------ |:---------------:|:-----:|
| ad      | Geçerli |  |
| KullaniciAdi      | Geçerli |    |
| kullanici_adi | Geçerli |     | 
| tamsayi! | Geçersiz | ! gibi karakterler kullanılamaz |
| 2sayi | Geçersiz | sayı ile başlayamaz |
| yil2001 |  Geçerli | |
| _sinif_ortalamasi_ | Geçerli | |
| return | Geçersiz | C++ dilindeki anahtar kelimeler kullanılamaz |

> Değişken isimlendirmeyi öğrendiğimize göre şimdi de C++ dilindeki temel veri türlerini (type) öğrenebiliriz.

## C++ Dilindeki Temel Veri Tipleri
- Programdaki veriler bellekte(RAM) depolanır ve kapladıkları alanları byte(8 bit) türünden ifade ederiz. Bizde veri boyutu ve türüne göre ihtiyacımız olanı kullanırız.
- Aşağıdaki tablodan programda kullandığımız verilerin tiplerini, bellekte kapladıkları alanları ve kullanım aralıklarını görebilirsiniz.





