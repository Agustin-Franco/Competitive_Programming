#include <iostream>
using namespace std;
 
int main() {
    int cantidad_te = 0;
    int S, P;
    cin >> S >> P;
 
    int d = P - S; // atraso en segundos
 
    if (d <= 0) {
        cantidad_te = 0;
    } else if (d < 300) {        // < 5 min
        cantidad_te = 1;
    } else if (d < 900) {        // < 15 min
        cantidad_te = 2;
    } else if (d < 1800) {       // < 30 min
        cantidad_te = 3;
    } else {                     // >= 30 min
        cantidad_te = 4;
    }
 
    cout << cantidad_te;
    return 0;
}