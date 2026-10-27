#include <iostream>
#include <ncurses.h>

using namespace std;

int main()
{
    // 1. SETUP NCURSES (DO NOT REMOVE)
    initscr();
    noecho(); // Prevents input from doubling on screen

    // === WRITE YOUR VARIABLE INITIALIZATIONS HERE ===
    char user_inp ;
    int letter_counter= 0,word_counter=0 ;
    // ================================================

    printw("Type text (Press ESC to stop):\n");
    move (2,0);
    refresh();


    do {
        // Reads a single character from the keyboard
        user_inp = getch();
        addch(user_inp);
        int y, x;
        getyx(stdscr, y, x);
        letter_counter+=1;
        if (user_inp==32)
            word_counter+=1;
        move(20,0);
        printw("Chars: %d | Words: %d", letter_counter, word_counter);
        move(y, x);
        refresh();

    } while (user_inp != 27);

    // 2. CLOSE NCURSES WINDOW MODE (DO NOT REMOVE)
    // This restores the normal terminal so cout works cleanly below.
    endwin();

    // === WRITE YOUR FINAL COUT PRINTS HERE ===
    cout << "\n\n--- Results ---" << endl;
    cout<<"Final Letter count is "<<letter_counter<<endl;
    cout<<"Final Word count is "<<word_counter<<endl;
    // =========================================

    return 0;
}
