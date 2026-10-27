#include <iostream>

using namespace std;

int main()
{

    int input,first = 0 , second = 1,fib ;
    cout<<"Please Enter a number ";
    cin>>input;
    for (int i = 1 ;i<input;i++){
        fib = first + second ;
        first = second ;
        second = fib ;
    }
    cout << fib;


    return 0;
}
