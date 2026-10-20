#include <iostream>
using namespace std;

int glo =9;//global variable - declared outside all functions
void sum(){
    int a = 5;
    cout<<glo; 
}

int main() {
    int glo = 9;//local variable - declared inside a function
    glo = 78;
    int a = 4, b = 6;
    float pi = 3.14;
    char c = 'u';
    bool t = true; 
    sum();
    cout <<glo<<t;
    return 0;
}
