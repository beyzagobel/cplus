#include <iostream>

using namespace std;

int main(){

  bool a = (5 < 1);      // yanlış olduğu için false yani 0 değerini döndürür
  bool b = (3 > 7);      
  bool c = (8 <= 8);     // doğru olduğu için true yani 1 değerini döndürür
  bool d = (10 >= 13);
  bool e = (2 == 2);
  bool f = (0 != 0);     // 0=0 true, değili false yani 0 döndürür

  cout << "a' nin degeri:  " << a << endl;
  cout << "b' nin degeri:  " << b << endl;
  cout << "c' nin degeri:  " << c << endl;
  cout << "d' nin degeri:  " << d << endl;
  cout << "e' nin degeri:  " << e << endl;
  cout << "f' nin degeri:  " << f << endl;

  return 0;
}