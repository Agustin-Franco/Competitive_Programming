#include <iostream>
#include <string>
using namespace std;    
 
int main()
{
    int cantFrases = 0;  
    int cantPetalos = 0; 
    string palabraFinal;               
    string a;
 
    cin >> cantFrases;
    cin >> cantPetalos;
 
 
    for(int i=1; i <= cantPetalos; i++){
    
        if((i % cantPetalos) == (cantFrases % cantPetalos)){
            cin >> palabraFinal;
        }
        else{
            cin >> a;
        }
    }
        
    cout << palabraFinal;
    return 0;
    