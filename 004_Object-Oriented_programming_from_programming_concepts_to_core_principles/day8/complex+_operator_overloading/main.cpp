#include <iostream>

using namespace std;
class Complex
{
    int real ;
    int img ;
public :
    Complex(int _real, int _img){
        real = _real;
        img = _img;
    }
    Complex(){
    real = 0;
    img = 0;
    }

    void setReal(int _real)
    {
        real=_real;
    }
    void setImg ( int _img)
    {
        img = _img;
    }
    int getReal()
    {
        return real;
    }
    int getImg()
    {
        return img;
    }
    void print ()
    {
        if (img>0)
        {
            cout<<real<<'+'<<img<<'j'<<endl;

        }
        else if (img<0)
        {
            cout<<real<<img<<'j'<<endl;

        }else {
                    cout<<real<<endl;

        }
    }
    Complex add (Complex x){
       Complex res;
    res.real = real + x.real;
    res.img = img + x.img;
    return res;

    }

    Complex operator+ (Complex g){
        Complex res;
        res.real=real + g.real;
        res.img = img + g.img;
        return res;
    }
    Complex& operator+(int x){
        real +=1;
        return *this;
    }

    int operator==( Complex y ){
       return real==y.real;
    }


};
Complex add(Complex x , Complex y){
Complex res;
res.setReal(x.getReal()+y.getReal());
res.setImg(x.getImg()+y.getImg());

return res;
};
Complex operator+(int y , Complex lala){
    lala.setReal(1+lala.getReal());
    return lala;
}

int main()
{

    Complex n1(10,15), n2(20,25) ,n3 ,n4  ;

    n4 = n1+n2;
    n1.print();
    n4.print();
    n4 = n4 + 1 ;
    n1.print();
    n4.print();
    n4 = 1+ n4;
    n4.print();
    cout <<(n4==n4);

    return 0;
}
