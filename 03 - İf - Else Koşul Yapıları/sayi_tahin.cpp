
#include <iostream>
using namespace std;

int main(){
    int gizli;
    int tahmin;
    char yanit;
    gizli=rand() % 100;    // program her çalıştığında gizli değişkenine, faklı değerde sayı atar.

    cout<<"Tahmin ettiginiz sayiyi giriniz : ";
    cin>>tahmin;

    if(tahmin==gizli){

        cout<<"Tebrikler.Gizli sayiyi buldunuz. "<<endl;
        cout<<"Gizli sayi = "<<gizli<<endl;

    }

    else{

        cout<<"Uzgunum.Gizli sayiyi bulamadiniz."<<endl;

        if (tahmin>gizli){
            cout<<"Tahmin ettiginiz sayi gizli sayidan buyuktur. "<<endl;
        }
        else{
            cout<<"Tahmin ettiginiz sayi gizli sayidan kucuktur. "<<endl;
        }

    }

        cout<<"Gizli sayiyi bilmek ister misiniz ? "<<endl;
        cout<<"Evet icin 'E' , Hayir icin  'H' yaziniz. ";
        cin>>yanit;

        if(yanit=='E') cout<<"Gizli sayi : "<<gizli<<endl;

        
        if(yanit=='H')cout<<"Program kapaniyor... "<<endl;


    return 0;
    
}

/*

Output

Tahmin ettiginiz sayiyi giriniz : 45
Uzgunum.Gizli sayiyi bulamadiniz.
Tahmin ettiginiz sayi gizli sayidan buyuktur.
Gizli sayiyi bilmek ister misiniz ?
Evet icin 'E' , Hayir icin  'H' yaziniz. H
Program kapaniyor... 

------------------------------------

Tahmin ettiginiz sayiyi giriniz : 56
Uzgunum.Gizli sayiyi bulamadiniz.
Tahmin ettiginiz sayi gizli sayidan buyuktur.
Gizli sayiyi bilmek ister misiniz ?
Evet icin 'E' , Hayir icin  'H' yaziniz. E
Gizli sayi : 41

*/