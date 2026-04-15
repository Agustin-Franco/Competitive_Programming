#include <iostream>
int main() {
    int t;
    std::cin >> t;
    
    for(int i = 1; i <= t; i++) {
        int a;
        int b;
        std::cin >> a;
        std::cin >> b;
        
        if(a > b){
            a -= (a-b)*2;
            b -= (a-b);
        } else {
            a -= (b-a);
            b -= (b-a)*2;
        }
        
        if ((a%3 == 0) && (a >= 0)) {
            std::cout << "YES\n";
        } else {
            std::cout << "NO\n";
        }
    }
}
