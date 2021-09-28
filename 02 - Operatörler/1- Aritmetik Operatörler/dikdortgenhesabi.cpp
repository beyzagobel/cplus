#include <iostream>
using namespace std;

int main(){

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

Dikdortgenin uzun kenarini giriniz : 4
Dikdortgenin kisa kenarini giriniz : 2
Dikdortgenin cevresi : 12
Dikdortgenin alani : 8

*/


}