#include <iostream>

using namespace std;
class point {
    int xcor;
    int ycor;
public:
    point (int _x, int _y){
        xcor= _x;
        ycor = _y;
    }
    point (){
    xcor = 0;
    ycor = 0;
    }
    void setX(int _x){
    xcor= _x;
    }
    void setY(int _y){
    xcor= _y;
    }
    int getX(){
    return xcor;
    }
    int getY(){
    return ycor;
    }
    void print(){
    cout<< '('<<xcor<< ','<< ycor<< ')'<<endl;
    }
    ~ point(){
        cout<< "Destruction" << endl;
    }
};

void print (point x ){
    cout<< '('<< x.getX()<< ','<<x.getY()<< ')'<<endl;
}

int main()
{
    point ahmed(10,20);
    ahmed.print();
    point lala;
    lala.print();
    print(ahmed);
    return 0;
}
