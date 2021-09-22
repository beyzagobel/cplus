# C++ Programlama Diline Giriş
- C++ dili bir veya birden fazla fonksiyondan oluşur.
- Fonksiyonlar içerisinde belli görevleri yapan komutlardan  oluşmaktadır.
- Her C++ programı  main() fonksiyonu ile içerir çünkü program bu fonksiyon ile başlamaktadır.
- Yazılan her komut ; ile sonlandırılmalıdır.
- Her fonksiyonun başı ve sonu { } ayraçları ile belirtilir. 
- Diyez (#) ile başlayan satırlar, ön işlemci emir komutlarıdır. Görevi, içerisinde belli komutlar barındıran dosyaları programa dahil etmektir, çağırmaktır. 

```  
1. #include <iostream>  // iostream;  girdi çıktı komutlarını(cin,cout) içeren kütüphanedir. iostream ile bu komutları 
                           programa dahil ediyoruz.
```

```
2. using namespace std;  // iostream kütüpanesinin elemanı olan std, bir komutu tanımlamak için kullanılır(cout<< gibi)
                         // namespace ise bu gibi komutların hepsini birlikte tanımlamamız için kullanılır.
```

```
int main(){
       cout<<" yazılan her veri ekrana çıktı veir";
       cin>>"kullanıcı tarafından girilen girdiler";
       
       // şimdilik yazacağımız tüm komutları main() fonksiyonu içerisinde tanımlayacağız.
}
```
- Şimdi artık klasik olan ilk programımız ' Hello Word ' kodlayalım :)
