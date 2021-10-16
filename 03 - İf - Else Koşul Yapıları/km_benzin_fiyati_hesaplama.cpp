// Kullanıcının girdiği km değişkenine göre ödenen yakıt parası hesaplama

#include <iostream>
using namespace std;

int main(){

    // İlk 100 km gidilen yol için 0.7 tl ödenecek
    // İlk 100 km'den sonrası herkilometre için 0.3 tl ödenecektir

    double yuz_alti=0.5;
    double yuz_ustu=0.2;
    int kilometre;
    double toplam_ucret;

    cout<<"Gidilen kilometreyi giriniz : ";
    cin>>kilometre;

    if(kilometre<=100){
        toplam_ucret=kilometre*yuz_alti;
        cout<<"Odenecek ucret : "<<toplam_ucret<<" tl "<<endl;

    }
    else if(kilometre>100){
        toplam_ucret=(100*yuz_alti)+((kilometre-100)*yuz_ustu);
        cout<<"Odenecek ucret : "<<toplam_ucret<<" tl "<<endl;

    }

}

/*

Output

Gidilen kilometreyi giriniz : 85
Odenecek ucret : 42.5 tl 

------------------------------

Gidilen kilometreyi giriniz : 100
Odenecek ucret : 50 tl 

------------------------------

Gidilen kilometreyi giriniz : 145
Odenecek ucret : 59 tl 

*/