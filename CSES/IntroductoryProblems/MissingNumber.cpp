#include <iostream>
using namespace std;

int main()
{
     long n = 0; 
     long num = 0; 
     long total = 0; 

    cin >> n;

    for(int i = 0; i < n - 1; i++) {
        cin >> num;
        total = total + num;
    }

     long suma_esperada = (n * (n + 1)) / 2;
    
     long numero_faltante = suma_esperada - total;
    
    cout << numero_faltante << endl;
    
    return 0;
}