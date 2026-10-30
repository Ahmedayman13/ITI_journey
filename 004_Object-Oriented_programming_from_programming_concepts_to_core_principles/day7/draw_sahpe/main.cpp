#include <iostream>
#include <graphics.h>

using namespace std;
class Point{
int x;
int y;
public:
    Point(int _x , int _y){
        x = _x;
        y= _y;
    }
    Point(int _x){
    x=y=_x;
    }
    Point (){
    x=y=0;
    }
    Point(const Point& cpd){

        x=cpd.x;
        y=cpd.y;
    }


    void setX(int _x){
    x = _x;
    }
    void setY(int _y){
    y = _y;
    }
    void setPoint(const Point& ptr){
        x = ptr.x;
        y= ptr.y;

    }
    int getX (){
    return x;
    }

    int getY (){
    return y;
    }
    void setPoint(int _x ,int _y){
        x= _x;
        y = _y;
    }

    void getPoint(){
    cout<< '('<<x<< ',' << y << ')'<<endl;
    }

};

class Rectanglet {
Point ul;
Point lr;
public:
    Rectanglet(int x1 , int y1 , int x2 , int y2): ul(x1,y1), lr(x2,y2){}
    Rectanglet(Point x, Point y):ul(x),lr(y){}
    void setUl(int _x , int _y){
        ul.setX(_x);
        ul.setY(_y);
    }
    void setLr(int _x , int _y){
        lr.setX(_x);
        lr.setY(_y);
    }
    void setPoints(int x1, int y1 , int x2 , int y2){
        ul.setX(x1);
        ul.setY(y1);
        lr.setX(x2);
        lr.setY(y2);

}
void getPoint(){
    ul.getPoint();
    lr.getPoint();
}
void draw(){
    rectangle(ul.getX(),ul.getY(),lr.getX(),lr.getY());
}
};
class Circle{
Point center;
int radius ;
public:
    Circle(Point pt , int x):center(pt){
        radius = x;
    }
    Circle(int x , int y , int rad):center(x,y){
        radius=rad;
    }
    void setCenter(int x , int y){
        center.setPoint(x,y);
    }
    void setrad(int x ){
    radius=x;
    }
    void printCirlce(){
    cout << "Center is ";
    center.getPoint();
    cout << "Radius is " << radius << endl;
}

    void draw (){
    circle(center.getX(),center.getY(),radius);
    }

};
class triangle {
    Point v1;
    Point v2;
    Point v3;
public:
    triangle(int x1 , int y1 , int x2 , int y2 ): v1(x1,y1), v2(x2,y1),v3(x2,y2){}
    void setPoints(int x1 , int y1 , int x2 , int y2){
        v1.setPoint(x1,y1);
        v2.setPoint(x2,y1);
        v3.setPoint(x2,y2);
    }

    void draw (){
        line(v1.getX(),v1.getY(),v2.getX(),v2.getY());
        line(v1.getX(),v1.getY(),v3.getX(),v3.getY());
        line(v3.getX(),v3.getY(),v2.getX(),v2.getY());




    }

};
int main()
{
     initwindow(800, 600);
     Rectanglet reko(100,200,400,300);
     reko.draw();
     Circle seko(100,200,50);
     seko.draw();

     triangle teto(100,200,200,300);
     teto.draw();

     getch();
    closegraph();
    return 0;
}
