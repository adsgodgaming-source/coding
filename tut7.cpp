#include <iostream>
using namespace std;

int c=45;

int main(){

    /********** BUILT IN DATA TYPES ***********/
    
    // int a, b, c;
    // cout<<"Enter the value of a"<<endl;
    // cin>>a;`

    // cout<<"Enter the value of b"<<endl;
    // cin>>b;

    // c= a + b;
    // cout<< "The sum of a and b is "<<c<<endl;
    // cout<<"global c is "<<::c<<endl;

    /********** FLOAT , DOUBLE AND , LONG DOUBLE LITERALS ***********/
    
    // float d = 34.4;
    // double e = 34.4f;
    
    // cout<<"The value of d is"<<endl<<d<<endl<<"The value of e is"<<endl<<e<<endl;
    
    //34.4 //This is a double by default
   // 34.4f //This is  a float
    //34.4l //This is a  long double
    
    // cout<<"size of 34.4f is "<<endl<<sizeof(34.4)<<endl;
    // cout<<"size of 34.4f is "<<endl<<sizeof(34.4f)<<endl;
    // cout<<"size of 34.4f is "<<endl<<sizeof(34.4F)<<endl;
    // cout<<"size of 34.4f is "<<endl<<sizeof(34.4l)<<endl;
    // cout<<"size of 34.4f is "<<endl<<sizeof(34.4L)<<endl;
    
/********** REFERENCE VARIABLES ***********/
    // float x = 455;
    // float & y = x;

    // cout<<x<<"\n";
    // cout<<y<<"\n";
  

/******************TYPECASTING****************/
    int a = 45;
    float b = 45.46;
    cout<<"The value of a is "<<(float)a<<;
    cout<<"The value of b is "<<(int)b<<;
    
    int c = int(b);

    //you can also write float(a) or int(b)

    return 0;

}
