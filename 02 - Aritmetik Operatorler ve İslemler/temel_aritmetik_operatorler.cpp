// Kullanıcıdan iki tane sayı alan ve bu iki sayı ile dört işlem yapan program

#include <iostream>
using namespace std;

int main(){

    int sayi1,sayi2;
    cout<<"Birinci sayiyi giriniz : ";
    cin>>sayi1;
    cout<<"Ikinci sayiyi giriniz : ";
    cin>>sayi2;

// Toplama İşlemi

   cout<<"Bu iki sayinin toplami => "<<sayi1<<" + "<<sayi2<<" = "<<sayi1+sayi2<<endl;

// Çıkarma İşlemi

  cout<<"Bu iki sayinin farki => "<<sayi1<<" - "<<sayi2<<" = "<<sayi1-sayi2<<endl;

// Çarpma İşlemi

  cout<<"Bu iki sayinin carpimi => "<<sayi1<<" * "<<sayi2<<" = "<<sayi1*sayi2<<endl;

// Bölme İşlemi

  cout<<"Bu iki sayinin bolumu => "<<sayi1<<" / "<<sayi2<<" = "<<sayi1/sayi2<<endl;

// Mod Alma : Mod; 1. sayının 2. sayıya bölümünden kalanını verir
  
  cout<<"Bu iki sayinin mod islemi => "<<sayi1<<" % "<<sayi2<<" = "<<sayi1%sayi2;

/* 

Output

Birinci sayiyi giriniz : 6
Ikinci sayiyi giriniz : 2
Bu iki sayinin toplami => 6 + 2 = 8
Bu iki sayinin farki => 6 - 2 = 4
Bu iki sayinin carpimi => 6 * 2 = 12
Bu iki sayinin bolumu => 6 / 2 = 3
Bu iki sayinin mod islemi => 6 % 2 = 0

*/
    return 0;

}