#include <iostream>
using namespace std;

int main(){

// Dört farklı işlemi burada bulabilirsiniz

   int a=4,b=6;
   cout<<"a 'nin degeri = "<<a<<endl;
   cout<<"b 'nin degeri = "<<b<<endl;

   cout <<"a = b++ islemi uygulaniyor..."<<endl;   
   a=b++;                                         // b'yi a'ya ata, b'yi 1 arttır
   cout<<"a 'nin yeni degeri = "<<a<<endl;        // a=6
   cout<<"b 'nin yeni degeri = "<<b<<endl;        // b=7
---------------------------------------------------
   int a=4,b=6;

   cout <<"a = ++b islemi uygulaniyor..."<<endl;    
   a=++b;                                        // b'yi 1 arttır, a'ya ata
   cout<<"a 'nin yeni degeri = "<<a<<endl;       // a=7
   cout<<"b 'nin yeni degeri = "<<b<<endl;       // b=7
-------------------------------------------------
int a=4,b=6;
   
   cout <<"a = b-- islemi uygulaniyor..."<<endl;  
   a=b--;                                        // b'yi a'ya ata, b'yi 1 azalt
   cout<<"a 'nin yeni degeri = "<<a<<endl;       // a=6
   cout<<"b 'nin yeni degeri = "<<b<<endl;       // b=5
---------------------------------------------------
int a=4,b=6;

   cout <<"a = --b islemi uygulaniyor..."<<endl;
   a=--b;                                        // b'yi 1 azalt, a'ya ata
   cout<<"a 'nin yeni degeri = "<<a<<endl;       // a=5
   cout<<"b 'nin yeni degeri = "<<b<<endl;       // b=5


/*

Output :

a 'nin degeri = 4
b' nin degeri = 6
a = b++ islemi uygulaniyor...
a 'nin yeni degeri = 6
b 'nin yeni degeri = 7
-----------------------------------
a = ++b islemi uygulaniyor...
a 'nin yeni degeri = 7
b' nin yeni degeri = 7
----------------------------------
a = b-- islemi uygulaniyor...
a 'nin yeni degeri = 6
b' nin yeni degeri = 5
----------------------------------
a = --b islemi uygulaniyor...
a 'nin yeni degeri = 5
b' nin yeni degeri = 5


*/
  return 0;
}