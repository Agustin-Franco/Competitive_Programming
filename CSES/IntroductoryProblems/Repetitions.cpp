#include <iostream>
#include<string>
using namespace std;

int main() {

int largo = 1;
int max_largo = 1;

string adn;

cin >> adn;

for(size_t i = 1; i < adn.size(); i++){
    if(adn[i] != adn[i-1]){
        if(largo >= max_largo){
            max_largo = largo;
        }
        largo = 1;
        }
    else{
        ++largo;
        }
    }
    
if(largo > max_largo){
    cout << largo;
    }
else{
    cout << max_largo;
    }
    


}

