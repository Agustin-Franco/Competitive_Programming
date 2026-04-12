#include <iostream>

using namespace std;

int main()
{
    long long n;
    cin >> n;

    long long ceros = 0;
    long long power = 5;

    while(power <= n){
        ceros += n / power;
        power *= 5;
    }

    cout << ceros;

}
