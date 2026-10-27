#include <iostream>
#include <ncurses.h>

using namespace std;

int main()
{
    initscr();
    cbreak();
    noecho();


    int ch;

    printw("Press any key (q to quit):\n");
    refresh();
    ch = getch();

    if(ch ==27){
        ch = getch();
        if (ch==91){
        printw("The Key is Extended");
        refresh();
        ch = getch();

        }
    } else
    printw("The Key Is normal");
    {

    }

    getch();
    endwin();


    return 0;
}
