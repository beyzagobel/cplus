#include <iostream>
using namespace std;

int main(){

// Yaşınıza göre oy kullanıp kullanamadğınızı ekrana yazan program

    int yas;
    cout<<"Yasinizi giriniz : ";
    cin>>yas;

    if(yas>=18){

         cout<<"Oy kullananabilirsiniz."<<endl;

    }

    else{

        cout<<"Oy kullanamazsiniz."<<endl;

    }

    cout<<"Hoscakalin.";
    return 0;

/*

Output

Yasinizi giriniz : 15
Oy kullanamazsiniz.
Hoscakalin.
-----------------------------
Yasinizi giriniz : 18
Oy kullananabilirsiniz.
Hoscakalin.
-----------------------------
Yasinizi giriniz : 25
Oy kullananabilirsiniz.
Hoscakalin.

*/

}