#include <iostream>
#include <ncurses.h>
using namespace std;

void gotoxy(int x, int y)
{
    // ANSI Escape sequence: \033[%d;%df or \x1B[%d;%df
    // Note: ANSI sequences expect (col, row) which corresponds to (y, x)
    printf("\033[%d;%dH", y, x);
}

void clearScreen()
{
    // \033[2J clears the entire screen, \033[H moves the cursor to (1,1)
    std::cout << "\033[2J\033[H" << std::flush;
}

int main()
{
    cout<<"Please Enter The Size of The Grid"<<endl;
    int size,cells,col,row ;
    cin>>size;
    cells = size * size ;
    clearScreen();
    col = size/2 + 1;
    row = 1;
    gotoxy(3*col,3*row);
    cout<<1;
    for (int i = 2; i<=cells; i++)
    {
        if(((i-1)%size)==0)
        {
            if((row+1)>size)
                row = 1;
            else
                row+=1;

            gotoxy(3*col,3*row);
            cout<<i;
        }

        else
        {
            if ((col-1)<1)
                col = size;
            else
                col-=1;
            if ((row-1)<1)
                row = size;
            else
                row-=1;
            gotoxy(3*col,3*row);
            cout<<i;

        }
    }




    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;





    return 0;
}
