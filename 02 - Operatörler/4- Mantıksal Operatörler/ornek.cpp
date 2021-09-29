#include <iostream>
using namespace std;

int main() {

    bool kosul;

    kosul = (2 != 7) && (2 < 7);     // T ve T = 1 değeri döner
    cout << "(2 != 7) && (2 < 7) ifadesinin degeri : " << kosul << endl;

    kosul = (2 == 7) && (2 < 7);    // F ve T = 0 değeri döner
    cout << "(2 == 7) && (2 < 7) ifadesinin degeri : " << kosul << endl;

    kosul = (2 == 7) && (2 > 7);    // F ve F = 0 değeri döner
    cout << "(2 == 7) && (2 > 7) ifadesinin degeri : " << kosul << endl;

    kosul = (2 != 7) || (2 < 7);    // T veya T = 1 değeri döner
    cout << "(2 != 7) || (2 < 7) ifadesinin degeri : " << kosul << endl;

    kosul = (2 != 7) || (2 > 7);    // T veya F = 1 değeri döner
    cout << "(2 != 7) || (2 > 7) ifadesinin degeri : " << kosul << endl;

    kosul = (2 == 7) || (2 > 7);    // F veya F = 0 değeri döner
    cout << "(2 == 7) || (2 > 7) ifadesinin degeri : " << kosul << endl;

    kosul = !(2 == 7);    // False'nin değili = T = 1 değeri döner
    cout << "!(2 == 7) ifadesinin degeri : " << kosul << endl;

    kosul = !(7 == 7);    // True'nin değili = F = 0 değeri döner
    cout << "!(7 == 7) ifadesinin degeri : " << kosul << endl;

    return 0;
}