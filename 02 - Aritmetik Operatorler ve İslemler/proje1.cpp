// Kullanıcıdan iki tane sayı alan ve bu iki sayı ile dört işlem yapan program

#include <iostream>
using namespace std;

int main(){

    int sayi1,sayi2;
    cout<<"Birinci sayiyi giriniz : ";
    cin>>sayi1;
    cout<<"İkinci sayiyi giriniz : ";
    cin>>sayi2;

// Toplama İşlemi
   cout<<sayi1<<" + "<<sayi2<<" = "<<sayi1+sayi2;

// Çıkarma İşlemi

   cout<<sayi1<<" - "<<sayi2<<" = "<<sayi1-sayi2<<endl;

// Çarpma İşlemi

   cout<<sayi1<<" * "<<sayi2<<" = "<<sayi1*sayi2;

// Bölme İşlemi

   cout<<sayi1<<" / "<<sayi2<<" = "<<sayi1/sayi2;

    return 0;
}