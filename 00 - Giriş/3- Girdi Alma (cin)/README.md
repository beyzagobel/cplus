# C++ Programlamada Girdi Alma
- Standart girdi nesnesi olan `cin`, kullanıcıdan veri almamızı sağlamaktadır. Bu sayede programda kullanıcı ile programcı arasında etkileşim sağlanmış olur.
- `<iostream>` kütüphanesindendir.
- `cin` den sonra gelen `>>` operatörünün sağ tarafına ise her türlü tipte veri saklayabildiğimiz değişken veya değişkenler yazılır.
Kısacası bu değişkenlere kullacı tarafından terminale yazılan veriler atanmaktadır. Bu sayede kullanıcının programa girdiği veriler değişken adı altında programda tutulmaktadır.
- Değişken tanımlamayı sonra anlatacağım fakat anlaşılsın diye kısaca şunu demeliyim ki değişkenin içinde hangi veri türünü barındırmak istiyorsak o türde değişken tanımlamalıyız.
- örneğin;

``` 

1. int sayi;                      // integer yani tamsayı tipinde değişken tanımlanmış
2. cout<<"Bir sayi giriniz:";    // kullanıcıya ne demek isterseniz onu yazabilirsiniz
3. cin>>sayi;                   // bu tamsayı tipindeki sayi değişkenine kullanıcının girdiği veri atanır

cout<<endl;     // çıktıda bir satır atlama sağlar

1. string ad;                  // değişken tanımlanmış
2.cout<<"Ad: ";               
3.cin>>ad;                      // kullanıcının girdiği veri yani adı, ad değişkenine atanır
4.cout<<endl;
5.cout<<"Merhaba: "<<ad;       //  kullanıcın girdiği adı, programcı tarafından ad değişkeni ile kullanılmış oldu
 

Output:

Bir sayi giriniz:__           // terminaldeki bu kısma tamsayı tipinde veri girişi yapabilirsiniz. 
Ad: __                       // kullanıcı metin tipinde veri girişi yapar (örn; Beyza yazdım)
Merhaba Beyza               
```
