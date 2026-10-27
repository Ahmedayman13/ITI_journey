#include <iostream>
#include <ncurses.h>

using namespace std;

int main()
{
    initscr();
    cbreak();
    noecho();
    int choice ;
    int flag = 0;

    do{
    printw("New\nDisplay\nExit\n");
    printw("Please Enter a Your Choice\n");


    choice=getch();
    switch(choice){
        case 'n':
        case 'N':
            printw("You Selected New");
            break;
        case'd':
        case'D':
            printw("Yous Selected Display");
            break;
        case'e':
        case'E':

            printw("You Selected Exit");
            flag = 1;
            break;
    }

    getch();
    clear();
    }

    while(flag==0);

    refresh();             // 1. CRITICAL: Flashes the "You Selected Display" text to the monitor!
    getch();               // 2. CRITICAL: Pauses the screen so you can read it before the window vanishes!
    endwin();
    return 0;
}
