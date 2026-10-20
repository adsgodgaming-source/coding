#include <iostream>//This is a preprocessor directive that includes the iostream library which is used for input and output operations
using namespace std; //This allows us to use names in the standard namespace without the std:: prefix

int main(){
    int a = 10; //This declares an integer variable 'a' and initializes it with the value 10
    int b = 20;//This declares an integer variable 'b' and initializes it with the value 20
    double pi = 22/7.0;
    char name = 'A'; //This declares a character variable 'name' and initializes it with the character 'A'
    cout << "Here the value of a is " << a <<"\nThe value of b is " << b;
    cout << "\nThe approximate value of pi is " << pi;
    cout << "\nThe value of name is " << name;
    return 0;
}
