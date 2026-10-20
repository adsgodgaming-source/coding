#include <iostream>
#include "this.h"//this is a user defined header file
using namespace std;

int main(){
    int a = 10, b=17;
    cout<<endl;
    cout<<"the value of a==b is "<<(a==b)<<endl;
    cout<<"the value of a>b is "<<(a>b)<<endl;
    cout<<"the value of a<b is "<<(a<b)<<endl;
    cout<<"the value of a!=b is "<<(a!=b)<<endl;
    cout<<"the value of a<=b is "<<(a<=b)<<endl;
    cout<<"the value of a>=b is "<<(a>=b)<<endl;
    cout<<endl;

    cout<<"the value of a==b && a<b is "<<((a==b) && (a<b))<<endl;
    cout<<"the value of a==b || a<b is "<<((a==b) || (a<b))<<endl;
    cout<<"the value of !(a==b)  is "<<!(a==b)<<endl;
    

    return 0;
}
