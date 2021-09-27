#include <iostream>
using  namespace std;

int main(){

// Kullanıcıdan girilen bir karenin kenarından alan ve çevre hesabının yapılması
    int kare_kenari;
    cout<<"Karenin kenarini giriniz : ";
    cin>>kare_kenari;
    cout<<"Karenin cevresi : "<<kare_kenari*4<<endl;
    cout<<"Karenin alani : "<<kare_kenari*kare_kenari<<endl;

// Kullanıcıdan girilen dikdörtgen kenarları ile alan ve çevre hesabının yapılması

   int uzun_kenar,kisa_kenar;
   cout<<"Dikdortgenin uzun kenarini giriniz : ";
   cin>>uzun_kenar;
   cout<<"Dikdortgenin kisa kenarini giriniz : ";
   cin>>kisa_kenar;
   cout<<"Dikdortgenin cevresi : "<<(uzun_kenar*2)+(kisa_kenar*2)<<endl;
   cout<<"Dikdortgenin alani : "<<uzun_kenar*kisa_kenar;
   

}