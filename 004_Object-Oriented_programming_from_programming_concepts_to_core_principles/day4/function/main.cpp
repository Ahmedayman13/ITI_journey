#include <iostream>

using namespace std;
void printv1(char c, int i );

int main()
{
    char ch = '*';
    cin >> ch ;
    int z = 30;
    printv1(ch,10) ;
    cout <<"\n Welcome\n";
    printv1(ch,z);
    cout <<"\n Hello\n";
    printv1('x',20);

    return 0;
}

void printv1(char ch, int x)
{
    for (int i=0 ; i<x;i++){
            cout<<ch;

    }
}
void swap (int x,int y){
int temp = x ;
x=y;
y=temp;
}
//factorial
//power
//fibonacci
//calc two varaible and charcter : operation_canceled
//swap
