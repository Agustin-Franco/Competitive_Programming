#include <iostream>
#include <vector>
using namespace std;
 
int main() 
{
    int n = 0;
    cin >> n;
    vector <int> sol;  
 
 
    if(n < 4 && n != 1){
 
        cout << "NO SOLUTION";
 
    }
    else if(n == 1){
        cout << n ;
 
    }
 
    else if(n == 4){
        cout << "2 4 1 3";
        }
    else if(n == 5){
        cout << "4 2 5 3 1"; 
    }
    else{
        if(n % 2 == 1){
        sol.push_back(n);
        --n;
        }
    }
    
    
    
    for(int i = 1; i <= (n/2); i++){
        sol.push_back(i);
        sol.push_back(n/2 + i);
 
 
    }
    for(int a: sol){
        cout << a << ' ';
    }
}
