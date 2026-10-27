#include <iostream>

using namespace std;

int main()
{

    int number,power,answer=1,i = 0 ;
    cout<<"Please Enter a Number"<<endl;
    cin>>number;
    cout<<"Please Enter The Power"<<endl;
    cin>>power;
    if (power==0)
        answer = 1;
        else {
          for (i=0 ;i<power;i++){
        answer *= number;
    }
        }
    cout<<"The Answer is "<< answer <<endl;

}
