#include <iostream>
using  namespace std;

int main(){

// Kullanıcıdan girilen bir karenin kenarından alan ve çevre hesabının yapılması

    int kare_kenari;
    cout<<"Karenin kenarini giriniz : ";
    cin>>kare_kenari;
// program sırayla okunduğu için önce kullanıcıdan karenin kenarının girilmesi beklenir, sonra alan ve cevre hesabı yapılarak sonuç
// alan ve cevre değişkenine atanır, buraya dikkat ediniz !!
    int cevre=kare_kenari*4;
    int alan=kare_kenari*kare_kenari;
    cout<<"Karenin cevresi : "<<cevre<<endl;
    cout<<"Karenin alani : "<<alan<<endl;

    return 0;

/*
Output :

Karenin kenarini giriniz : 4
Karenin cevresi : 16
Karenin alani : 16

*/

}