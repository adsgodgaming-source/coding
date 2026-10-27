#include <iostream>
#include <iomanip>//Another Header file to include manipulators
using namespace std;

/********CONSTANTS IN CPP**********/

int main(){
//     const int a =34;// a is a constant variable and cannot be modified
// //  a = 45; // This would cause a compilation error
//     cout << a << endl;
//     return 0;


/********MANIPULATORS IN CPP**********/

    // int a=78 , b=90 , c= 1233;

    // cout << "The value of a without setw is: " << a << endl;
    // cout << "The value of b without setw is: " << b << endl;
    // cout << "The value of c without setw is: " << c << endl; 

    // cout << "The value of a is: " <<setw(4) << a << endl;
    // cout << "The value of b is: " <<setw(4) << b << endl;
    // cout << "The value of c is: " <<setw(4) << c << endl; 

    /*************OPERATOR PRECEDENCE**********/

    int a = 4, b = 5;
    int c = (a*5) + b;
    int d = a * 5 + b; // This is also valid as * has higher precedence than +
    int e = a * (5 + b); // This is also valid as * has higher precedence than +
    int f = (((a * 8) + 58) - 87 );
    
    cout << "The value of c is: " << c << endl;
    cout << "The value of d is: " << d << endl;
    cout << "The value of e is: " << e << endl;
    cout << "The value of f is: " << f << endl;
    return 0;
}