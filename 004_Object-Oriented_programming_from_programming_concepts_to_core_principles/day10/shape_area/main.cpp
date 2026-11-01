#include <iostream>

using namespace std;
class shape
{
    float dim1;
    float dim2;
public:
    shape(float x, float y)
    {
        dim1=x;
        dim2=y;
    }
    shape(float x )
    {
        dim1=dim2=x;
    }
    void virtual setDim1(float x)
    {
        dim1 = x;
    }
    void virtual setDim2(float x)
    {
        dim2 = x;
    }
    float getDim1()
    {
        return dim1;
    }
    float getDim2()
    {
        return dim2;
    }
    float virtual calcArea()=0;

};

class rectangle: public shape
{
public:
    rectangle(float x, float y ):shape(x,y)
    {
    }
    rectangle(float x ):shape(x) {}
    float calcArea()
    {
        return getDim1()*getDim2();
    }


};

class triangle : public shape
{
public:
    triangle(float x, float y ):shape(x,y) {}
    float calcArea()
    {
        return .5 * getDim1()*getDim2();
    }
};

class circle : public shape
{
public:
    circle(float x):shape(x) {}
    void  setDim1(float x)
    {
        setDim1(x);
        setDim2(x);
    }
    void  setDim2(float x)
    {
        setDim1(x);
        setDim2(x);
    }
    float calcArea()
    {
        return 22.0/7 * getDim1()*getDim2();
    }
};
class square : public rectangle
{
public:
    square( float x):rectangle(x) {}
};

void myfun(shape* s)
{
    cout<<s->calcArea();
    cout<<endl;

};

int main()
{
    rectangle r(10,20);
    cout<<r.calcArea()<<endl;
    circle c(10);
    circle* ptr = &c;
    cout<<c.calcArea()<<endl;


    /*
    rectangle dim1 * dim2
    triangle .5dim1 * dim2
    cricle pi * dim * dim2 where (dim1==dim)
    */
    square z(10);
    cout<<endl;
    cout<<z.calcArea()<<endl;

    shape** ptr2 = new shape*[4];

    ptr2[0] = new triangle(10,20);
    ptr2[1] = new rectangle(10,20);
    ptr2[2] = new square(10);
    ptr2[3] = new circle(20);

    for (int i = 0 ; i < 4 ; i++){
        myfun(ptr2[i]);
    }





    return 0;

}


