#include <iostream>

using namespace std;

int main()
{
    cout<<"Please Enter a Number"<<endl;
    int num,reversed=0 ;
    cin>>num;

    do {
        cout<<num%10;
        num/=10;
    }while(num>0);
    return 0;
}
