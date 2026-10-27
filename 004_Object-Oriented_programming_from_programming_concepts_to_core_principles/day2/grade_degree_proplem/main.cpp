#include <iostream>
#include <ncurses.h>
using namespace std;

    void gotoxy(int x, int y) {
    // ANSI Escape sequence: \033[%d;%df or \x1B[%d;%df
    // Note: ANSI sequences expect (col, row) which corresponds to (y, x)
    printf("\033[%d;%dH", y, x);
}

void clearScreen() {
    // \033[2J clears the entire screen, \033[H moves the cursor to (1,1)
    std::cout << "\033[2J\033[H" << std::flush;
}

int main()
{


    //degree proplem
    /*int degree;
    cout<<"Please Enter Your Degree to Get Your Grade"<<endl;
    cin>>degree;

    if(degree>=85)
        cout<<"Your Grade is Excellent";
        else if (degree>=75)
            cout<<"Your Grade is Very Good";
        else if (degree>=65)
            cout<<"Your Grade is Good";
        else if (degree>60)
            cout<<"Your Grade is Below Average";
        else cout<<"Sorry You did not pass";
            */

    ///////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////
/*
    int input,first = 0 , second = 1,fib ;
    cout<<"Please Enter a number ";
    cin>>input;
    for (int i = 1 ;i<input;i++){
        fib = first + second ;
        first = second ;
        second = fib ;
    }
    cout << fib;

    */

    int cells, number;

    cout<<"Please Enter a Number ";
    cin>>number;
    clearScreen();
    if (number%2==0)
        cout<<"Please Enter Odd number";
    else {
        cells = number * number ;
        int row = 1, col = number/2+1;
        gotoxy(col*3,row*3);
        cout<<1;

        for (int i = 2;i<=cells;i++)
        if ((i-1)%number==0){
                row +=1;
            if (row>number){
                row = 1;
                gotoxy(col*3,row*3);
                cout<<i;
            }
        else {
                gotoxy(col*3,row*3);
                cout<<i;

            }
        } else {

            row-=1;
            col-=1;
            if (row<1)
                row = number;
            if(col<1)
                col=number;
            gotoxy(col*3,row*3);
            cout<<i;

        }

    }







cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;








    return 0;
}
