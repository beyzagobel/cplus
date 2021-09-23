# C++ Programlamada Girdi Alma
- Standart girdi nesnesi olan `cin`, kullanıcıdan veri almamızı sağlamaktadır. Bu sayede programda kullanıcı ile programcı arasında etkileşim sağlanmış olur.
- `<iostream>` kütüphanesindendir.
- `cin` den sonra gelen `>>` operatörünün sağ tarafına ise her türlü tipte veri saklayabildiğimiz değişken veya değişkenler yazılır.
Kısacası bu değişkenlere kullacı tarafından terminale yazılan veriler atanmaktadır. Bu sayede kullanıcının programa girdiği veriler değişken adı altında programda tutulmaktadır.
- Değişken tanımlamayı sonra anlatacağım fakat anlaşılsın diye kısaca şunu demeliyim ki değişkenin içinde hangi veri türünü barındırmak istiyorsak o türde değişken tanımlamalıyız.
- örneğin;

``` 

1. int sayi;     // integer yani tamsayı tipinde değişken tanımlanmış
2. cout<<"Bir sayi giriniz:"; 
3. cin>>sayi;   // bu tamsayı tipindeki sayi değişkenine kullanıcıdan değer girilmesi beklenir.

Output:

Bir sayi giriniz:__  // terminaldeki bu kısma tamsayı tipinde veri girişi yapabilirsiniz. 

```
