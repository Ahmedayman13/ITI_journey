#include <iostream>

using namespace std;

int main()
{
     int num;
    bool isPrime = true;
    cout<<"Please Enter a Number "<<endl;
    cin>>num; // 10
    int j;
    for (j = 0 ;j<=num;j++){
    if (j == 0 || j == 1)
        isPrime = false;
   else if(j==2)
        isPrime=true;
    else {
        for (int i = 2 ;i<j;i++){
        if (j%i==0){
            isPrime = false;
            break;
        }
    }
    }
   if (isPrime )
            cout<<j<<endl;
    else
        isPrime= true;

   }

    return 0;
}
