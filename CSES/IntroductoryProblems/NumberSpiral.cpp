#include <iostream>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    for (int i = 1; i <= t; i++) {
    long long y;
    cin >> y;
    long long x;
    cin >> x;
 
    long long m = y;
    if (x > y) {
        m = x;
    }
 
    long long result;
    if(m%2 == 0) {
        result = (m*m - x + y - m + 1);
    } else {
        result = (m*m - y + x - m + 1);
    }
    
    cout << result << '\n';
    }
}
