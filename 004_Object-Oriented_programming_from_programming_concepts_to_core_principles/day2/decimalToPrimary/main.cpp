#include <iostream>

using namespace std;

int main()
{
    int num,place = 1, binary=0,last ;
    cout<< "Please Enter a Number"<<endl;
    cin>>num;
    for (;;){
       if (num != 0){
       last = num%2;
       num /= 2;
       binary += last * place;
       place *=10;
       }
       else
        break ;
    }
    cout<< "The Binary of your number is "<< binary<<endl;
    return 0;
}
