
#include <iostream>
using namespace std;

int main(){
    int gizli;
    int tahmin;
    int yanit;
    gizli=rand() % 100;

    cout<<"Tahmin ettiginiz sayiyi giriniz : ";
    cin>>tahmin;

    if(tahmin==gizli){
        cout<<"Tebrikler.Gizli sayiyi buldunuz. "<<endl;
        cout<<"Gizli sayi = "<<gizli<<endl;

    }
    else{
        cout<<"Uzgunum.Gizli sayiyi bulamadiniz."<<endl;
        if (tahmin>gizli)
        {
            cout<<"Tahmin ettiginiz sayi gizli sayidan buyuktur. "<<endl;
        }
        else{
            cout<<"Tahmin ettiginiz sayi gizli sayidan kucuktur. "<<endl;
        }
        cout<<"Gizli sayiyi bilmek ister misiniz ? "<<endl;
        cout<<"Evet icin 'E' , Hayir icin  'H' yaziniz. ";
        cin>>yanit;
        if(yanit=='E'){
               cout<<"Gizli sayi : "<<gizli<<endl;
        }
        else{
            cout<<"Program kapaniyor... "<<endl;
        }
    }

    return 0;
    
}