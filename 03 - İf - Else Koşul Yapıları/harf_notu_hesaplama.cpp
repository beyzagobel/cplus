// 100 üzerinden başarı notunuza göre harf notunuzu hesaplayan program

#include <iostream>
using namespace std;

int main(){

    int sinav_notu;
    char harf_notu;

    cout<<"Başari Notunuzu giriniz : ";
    cin>>sinav_notu;

    if(sinav_notu>=90){ harf_notu='A';}
    if(sinav_notu>=80){ harf_notu='B';}
    if(sinav_notu>=70){ harf_notu='C';}
    if(sinav_notu>=60){ harf_notu='D';}
    else{harf_notu='F';}
    cout<<"Harf notunuz : "<<harf_notu;


}