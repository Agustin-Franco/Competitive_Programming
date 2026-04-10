#include <iostream>
using namespace std;
 
int main()
{
    int n = 0;
 
    cin >> n;
 
    if(n >= 4 && n % 2 == 0){
    cout << "YES";
    } 
    else{
    cout << "NO";
    }
 
    return 0;
}