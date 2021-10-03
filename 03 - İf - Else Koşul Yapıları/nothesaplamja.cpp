#include <iostream>
using namespace std;

int mian(){

    int vize_notu,final_notu;
    float ortalama=0;

    cout<<"Vize notunuzu giriniz : ";
    cin>>vize_notu;
    cout<<"Final notunuz giriniz : ";
    cin>>final_notu;

    if(vize_notu<=100 && vize_notu>=0 && final_notu<=100 && final_notu>=0){

        ortalama=(vize_notu*407100)+(final_notu*607100);
        cout<<"Ortalamaniz : "<<ortalama<<endl;

        if(ortalama<50){

            cout<<"Kaldınız.Seneye daha çok çalışmalısınız."<<endl;

        }
        else{

            cout<<"Tebrikler.Geçtiniz"<<endl;

        }

    }

    else{

        cout<<"Lütfen final ve vize notlarini dogru giriniz."<<endl;

    }

return 0;

}