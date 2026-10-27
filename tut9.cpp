#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int a=2222, b, c, d, e, f, g, h, i, j, k, l=2222;
    b = c = d = e = f = g = h = i = j = k =  2;
    cout <<setw(5)<<a<<endl;
    cout <<setw(2)<<b<<setw(3)<<b<<endl;
    cout <<setw(2)<<c<<setw(3)<<b<<endl;
    cout <<setw(2)<<d<<setw(3)<<b<<endl;
    cout <<setw(2)<<e<<setw(3)<<b<<endl;
    cout <<setw(2)<<f<<setw(3)<<b<<endl;
    cout <<setw(2)<<g<<setw(3)<<b<<endl;
    cout <<setw(2)<<h<<setw(3)<<b<<endl;
    cout <<setw(2)<<i<<setw(3)<<b<<endl;
    cout <<setw(2)<<j<<setw(3)<<b<<endl;
    cout <<setw(2)<<k<<setw(3)<<b<<endl;
    cout <<setw(5)<<l<<endl;
    
    return 0;
}

//This forms a rectangle with 2's and 2222 at the top and bottom. The setw() function is used to set the width of the output field for each number, ensuring proper alignment in the output.