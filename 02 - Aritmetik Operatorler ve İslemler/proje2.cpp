#include <iostream>
using  namespace std;

int main(){

// Kullanıcıdan girilen bir karenin kenarından alan ve çevre hesabının yapılması

    int kare_kenari;
    cout<<"Karenin kenarini giriniz : ";
    cin>>kare_kenari;
// program sırayla okunduğu için önce kullanıcıdan karenin kenarının girilmesi beklenir, sonra alan ve cevre hesabı yapılarak sonuç
// alan ve cevre değişkenine atanır, buraya dikkat ediniz !!
    int cevre=kare_kenari*4;
    int alan=kare_kenari*kare_kenari;
    cout<<"Karenin cevresi : "<<cevre<<endl;
    cout<<"Karenin alani : "<<alan<<endl;

// Kullanıcıdan girilen dikdörtgen kenarları ile alan ve çevre hesabının yapılması
// dikdörtgenin alan ve çevre sonucunu tutan bir değişken tanımlanmamış direk hesaplama yapılmış, bu şekildede yazılabilir
   int uzun_kenar,kisa_kenar;
   cout<<"Dikdortgenin uzun kenarini giriniz : ";
   cin>>uzun_kenar;
   cout<<"Dikdortgenin kisa kenarini giriniz : ";
   cin>>kisa_kenar;
   cout<<"Dikdortgenin cevresi : "<<(uzun_kenar*2)+(kisa_kenar*2)<<endl;
   cout<<"Dikdortgenin alani : "<<uzun_kenar*kisa_kenar;
   
/*

Output :

Karenin kenarini giriniz : 4
Karenin cevresi : 16
Karenin alani : 16
Dikdortgenin uzun kenarini giriniz : 4
Dikdortgenin kisa kenarini giriniz : 2
Dikdortgenin cevresi : 12
Dikdortgenin alani : 8

*/

}