// Kullanıcının verilerine göre beden kitle indeksi hesaplama : kg/m^2

#include <iostream>
using namespace std;

int main(){

    string ad,soyad;
    int kg;
    float boy;
    float vucut_kitle_indeksi=kg/(boy*boy); 

    cout<<"Ad - Soyad : ";
    cin>>ad>>soyad;
    cout<<"Merhaba "<<ad<<" "<<soyad<<endl;
    cout<<"Vucut agirliginizi giriniz : ";
    cin>>kg;
    cout<<"Boyunuzu giriniz : ";
    cin>>boy;
    cout<<ad<<" "<<soyad<<" 'in vucut kitle indeksi : "<<vucut_kitle_indeksi;
    return 0;


}