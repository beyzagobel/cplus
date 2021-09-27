// Kullanıcının verilerine göre beden kitle indeksi hesaplama : kg/m^2

#include <iostream>
using namespace std;

int main(){

    string ad,soyad;
    int kg;
    float boy;
    float beden_kitle_indeksi=kg/(boy*boy); 

    cout<<"Ad - Soyad : ";
    cin>>ad>>soyad;
    cout<<"Merhaba "<<ad<<" "<<soyad<<endl;
    cout<<"Vucut agirliginizi giriniz : ";
    cin>>kg;
    cout<<"Boyunuzu giriniz : ";
    cin>>boy;
    cout<<ad<<" "<<soyad<<" 'in beden kitle indeksi : "<<beden_kitle_indeksi;
    return 0;

/*

Output :

Ad - Soyad : Beyza Gobel
Merhaba Beyza Gobel
Vucut agirliginizi giriniz : 53
Boyunuzu giriniz : 1.60
Beyza Gobel 'in beden kitle indeksi : 20.7

}