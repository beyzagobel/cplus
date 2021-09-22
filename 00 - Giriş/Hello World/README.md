# C++ Programlama Diline Giriş
- C++ dili bir veya birden fazla fonksiyondan oluşur.
- Fonksiyonlar içerisinde belli görevleri yapan komutlardan  oluşmaktadır.
- Yazılan her komut `;` ile sonlandırılmalıdır.
- Her fonksiyonun başı ve sonu `{ }` ayraçları ile belirtilir. 

### Komutlar
- Diyez (#) ile başlayan satırlar, ön işlemci emir komutlarıdır. Görevi, içerisinde belli komutlar barındıran dosyaları programa dahil etmektir, çağırmaktır. 
- `iostream` girdi çıktı komutlarını(cin,cout) içeren bir kütüphanedir. `include` ile bu komutları programa dahil ediyoruz.
```  
1. #include <iostream> 
```
- iostream kütüpanesinin elemanı olan `std` , bir komutu tanımlamak için kullanılır(`cout<<` gibi) `namespace` ise bu gibi komutların hepsini birlikte tanımlamamız için kullanılır.
```
2. using namespace std;  
```
- Her C++ programı  `main()` fonksiyonu ile içerir çünkü program bu fonksiyon ile başlamaktadır.
```
3. int main(){
       
       // şimdilik yazacağımız tüm komutları main() fonksiyonu içerisinde tanımlayacağız.
}
```
- `cout<<` operatörü, ekrana komuttan sonra gelen tırnak işaretleri içinde yer alan cümleyi yazar.
```
4. cout<<"Merhaba";           çıktı : Merhaba
   
```
- `cin>>` operatörünün sağ tarafına yazılan değişkenlere, kullanıcı tarafından girilen veriler atanır.

**Şimdi artık klasik olan ilk programımız ' Hello Word ' kodlayalım :)**
