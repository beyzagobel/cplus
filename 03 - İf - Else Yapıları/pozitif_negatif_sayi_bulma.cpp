// Kullanıcı tarafından girilen sayının negatif , pozitif veya 0 olduğunu gösteren program 

#include <iostream>
using namespace std;

int main(){
    
    int sayi;

    cout<<"Bir sayi giriniz : ";
    cin>>sayi;

    if(sayi<0){
        cout<<"Girdiginiz sayi negatiftir."<<endl;
    }
    else if(sayi>0){
        cout<<"Girdiginiz sayi pozitiftir"<<endl;
    }
    else{
        cout<<"Girdiginiz sayi isaretsiz sayidir."<<endl;
    }

    cout<<"Program sonlaniyor.";
    return 0;
}

/*

Output

Bir sayi giriniz : 5
Girdiginiz sayi pozitiftir
Program sonlaniyor.

---------------------------

Bir sayi giriniz : 5
Girdiginiz sayi pozitiftir
Program sonlaniyor.

--------------------------

Bir sayi giriniz : 0
Girdiginiz sayi isaretsiz sayidir.
Program sonlaniyor.

*/
