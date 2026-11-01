#include <iostream>

using namespace std;
template <typename t>
void swapInp (t& a,t& b){
    t temp;
    temp = a;
    a= b;
    b = temp;
};

int main()
{
    float x = 10.5;
    float y = 20.6;
    swapInp(x,y);
    cout<<x<<":"<<y<<endl;
    return 0;
}
