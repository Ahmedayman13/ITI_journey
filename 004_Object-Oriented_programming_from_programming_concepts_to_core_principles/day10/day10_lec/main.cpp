#include <iostream>

using namespace std;
    int fact (int x);
    int pow (int x , int y );
    void myfun(int* arr, int size, int i);




int main()
{
    int arr[4]={10,20,30,40};
    int size = 4;
    myfun(arr,size,0);

   cout<< fact(3)<<endl;
   cout<<pow(5,3)<<endl;
    return 0;
}

    int fact (int x){
        if (x==1)
            return 1;
        else
        return x * fact(x-1);
    }
int pow (int x , int y ){
if (y == 1)
    return x;
else return x*pow(x,y-1);
}

void myfun(int* arr, int size, int i){
if (i==size)
    return;
else
    cout<<arr[i]<<endl;
    myfun(arr,size,i+1);
    }
  //linear seach
    int search (int* arr, int& size, int i,int& key){
    if(i==size)
        return -1;
    else if (arr[i]==key)
        return i;
    else
        search(arr,size,i+1,key);
    }
