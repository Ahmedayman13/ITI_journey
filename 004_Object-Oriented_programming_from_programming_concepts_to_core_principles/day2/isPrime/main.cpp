#include <iostream>

using namespace std;

int main()
{
    int num;
    bool isPrime = true;
    cout<<"Please Enter a Number "<<endl;
    cin>>num;
    if (num == 0 || num == 1)
        isPrime = false;
   else if(num==2)
        isPrime=true;
    else {
        for (int i = 2 ;i<num;i++){
        if (num%i==0){
            isPrime = false;
            break;
        }
    }
    }
   if (isPrime == false)
            cout<<"Your number is not a prime number"<<endl;
   else {
    cout<<"Your number is a prime number"<<endl;
   }


     return 0;
}


