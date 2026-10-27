#include <iostream>
#include <ncurses.h>
#define size 3
using namespace std;

int main()
{
    initscr();
    cbreak();
    noecho();
    curs_set(0);
    keypad(stdscr, TRUE);
    int choice,  selected = 0 ;
    int flag = 0;
    int ch;
    string menu[size] = {"New", "Display", "Exit"};

    while (true) {

    for (int i = 0;i<size;i++){
            if (i==selected){
                attron(A_REVERSE);

            } mvprintw(0+i,0 , "%s", menu[i].c_str());
                    attroff(A_REVERSE);


    }
    move(0, 0);
    refresh();

    ch = getch();
    if (ch == 27)
        break;
    else if (ch==KEY_UP){
        selected--;
        if (selected<0){
            selected= 2;
        }
    } else if (ch==KEY_DOWN){
        selected++;
        if (selected>2){
            selected= 0;
        }
    }
}

    for (int i = 0;i<size;i++){
            if (i==selected){
                attron(A_REVERSE);

            } mvprintw(0+i,0 , "%s", menu[i].c_str());
                    attroff(A_REVERSE);


    }
    ch = getch();
     if (ch == 10 || ch == 13 || ch == KEY_ENTER){
        if (selected==0){
        printw("You Choose New");

        }
        else if (selected==1)
        printw("You Choose display");
        else if (selected==2)
        printw("You Choose exit");

    }
    move(0, 0);
    refresh();


   /* do{
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
        */

    refresh();             // 1. CRITICAL: Flashes the "You Selected Display" text to the monitor!
    getch();               // 2. CRITICAL: Pauses the screen so you can read it before the window vanishes!
    endwin();
    return 0;
}
