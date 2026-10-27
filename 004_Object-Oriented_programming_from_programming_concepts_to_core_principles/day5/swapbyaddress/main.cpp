#include <iostream>

using namespace std;
void swapInp (int *a,int *b){
    int temp;
    temp = *a;
    *a= *b;
    *b = temp;
};

int main()
{
    int x = 10;
    int y = 20;
    swapInp(&x,&y);
    cout<<x<<":"<<y<<endl;
    return 0;
}
