#include <iostream>

using namespace std;
class Stack {
int size ;
int tos ;
int* arr;
public:
    Stack( Stack &s){
        tos= s.tos;
        size = s.size;
         arr = new int[size];
        for(int i = 0 ; i <= tos ; i++){
            arr[i]=s.arr[i];
        }

    }
    Stack(){
    tos = -1;
    size = 5;
    cout << "Stack Created"<< endl;
     arr = new int[size];
    }

    void push(int d){
        if ( tos < size-1 ){
        tos ++ ;
        arr[tos]=d;
        }
        else {
            cout<< "Stack is full"<<endl;
        }

    }
    int pop(int& d){
    if(tos<0){
        cout << "Stack is Empty"<<endl;
        return 0;
    } else {
        d = arr[tos];
        tos-- ;
        return 1;
    }

    }

    ~Stack(){
        delete[] arr;
    }
};

int main()
{
    Stack s1;
    s1.push(10);
    s1.push(20);
    s1.push(30);
    int d ;
    s1.push(10);
    s1.pop(d);
        s1.pop(d);

            s1.pop(d);
    s1.pop(d);

    if (s1.pop(d)==1){
        cout << d ;
    }
    Stack s2(s1);

    return 0;
}
