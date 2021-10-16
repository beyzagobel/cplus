#include <iostream>
using namespace std;

int main(){

    int sayi1,sayi2;

    cout<<"Birinci sayiyi giriniz : ";
    cin>>sayi1;
    cout<<"Ikinci sayiyi giriniz : ";
    cin>>sayi2;

    if(sayi1>sayi2){

        cout<<"Birinci sayi ikinci sayidan buyuktur. "<<endl;

    }
    else{

        cout<<"Ikinci sayi birinci sayidan buyuktur. "<<endl;
    }

return 0;

}

/*
Output : 

Birinci sayiyi giriniz : 6
Ikinci sayiyi giriniz : 3
Birinci sayi ikinci sayidan buyuktur. 
-----------------------------------------
Birinci sayiyi giriniz : 3
Ikinci sayiyi giriniz : 6
Ikinci sayi birinci sayidan buyuktur. 

*/