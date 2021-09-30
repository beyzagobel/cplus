#include <iostream>
using namespace std;

int main(){

// Kullanıcı tarafından girilen sayı, çift mi tek mi ?

    int sayi;
    cout<<"Bir sayi giriniz : ";
    cin>>sayi;

    if(sayi%2==0){                  // girilen sayının 2'ye bölümünden kalan 0 ise çifttir demektir

        cout<<"Girdiginiz sayi cift sayidir."<<endl;

    }

    else{

       cout<<"Girdiginiz sayi tek sayidir."<<endl;

    }

/*

Output

Bir sayi giriniz : 5
Girdiginiz sayi tek sayidir.
--------------------------------
Bir sayi giriniz : 2
Girdiginiz sayi cift sayidir.

*/

}