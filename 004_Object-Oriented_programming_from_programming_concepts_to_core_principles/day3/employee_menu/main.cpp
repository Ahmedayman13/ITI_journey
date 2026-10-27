#include <ncurses.h>
#include <string>

using namespace std;

// el struct bet3 el mowazaf
struct Employee
{
    int id;
    char name[30];
    int age;
    float salary;
    float overtime;
    float deduction;
    float total;
};

int main()
{
    initscr();            // byzhr el shasha bta3et el terminal
    cbreak();             // yeqra kol harf men gher ma yestanna Enter
    noecho();             // ma yezharsh el keys elly el user bydoosha
    curs_set(0);          // ye5fy el cursor
    keypad(stdscr, TRUE); // yst2bl el arrows (KEY_UP w KEY_DOWN)

    string menu[4] = {"new", "display", "delete", "exit"};
    int selected = 0;
    int ch;
    int i;
    int running = 1;      // 1 ya3ni el program shaghal

    Employee emp[20];
    Employee e;
    int index;
    int newId;
    int delId;
    int j;
    int found, cancel, answer;

    for (i = 0; i < 20; i++)
    {
        emp[i].id = -1;
    }

    do
    {
        clear();

        for (i = 0; i < 4; i++)
        {
            if (i == selected)
            {
                attron(A_REVERSE);  // bysh8l al highlight
            }

            mvprintw(i, 0, "%s", menu[i].c_str());
            attroff(A_REVERSE);
        }
        refresh();  // yzhar kol elly etktab

        ch = getch();  // yestanna zorar men el user
        if (ch == KEY_UP)
        {
            selected--;
            if (selected < 0)
            {
                selected = 3;
            }
        }
        else if (ch == KEY_DOWN)
        {
            selected++;
            if (selected > 3)
            {
                selected = 0;
            }
        }
        else if (ch == '\n' || ch == KEY_ENTER || ch == 13)
        {
            if (selected == 0)
            {
                cancel = 0;
                index = -1;

                clear();
                echo();       // yezhar elly el user bykteboh
                curs_set(1);  // yezhar el cursor

                do
                {
                    index = -1;
                    printw("Enter index (0-19): ");
                    refresh();
                    scanw("%d", &index);
                    if (index < 0 || index > 19)
                    {
                        printw("Invalid index!\n");
                    }
                }
                while (index < 0 || index > 19);

                // section: law el makan mash8l nes2al replace wala la
                if (emp[index].id != -1)
                {
                    printw("Index used: id=%d ", emp[index].id);
                    printw("name=%s ", emp[index].name);
                    printw("age=%d ", emp[index].age);
                    printw("salary=%.2f ", emp[index].salary);
                    printw("overtime=%.2f ", emp[index].overtime);
                    printw("deduction=%.2f ", emp[index].deduction);
                    printw("total=%.2f\n", emp[index].total);
                    do
                    {
                        printw("replace? (y/n): ");
                        refresh();
                        answer = getch();  // yestanna harf wa7ed men el keyboard
                        printw("\n");
                    }
                    while (answer != 'y' && answer != 'Y' && answer != 'n' && answer != 'N');

                    if (answer == 'n' || answer == 'N')
                    {
                        cancel = 1;
                        printw("Cancelled. Press any key");
                        refresh();
                        getch();  // yestanna ay zorar
                    }
                }

                if (cancel == 0)
                {
                    do
                    {
                        newId = -1;
                        printw("Enter id: ");
                        refresh();
                        scanw("%d", &newId);
                        if (newId < 0)
                        {
                            printw("Id must be >= 0\n");
                        }
                    }
                    while (newId < 0);
                    e.id = newId;

                    printw("Enter name: ");
                    refresh();
                    getnstr(e.name, 29);

                    printw("Enter age: ");
                    refresh();
                    e.age = 0;
                    scanw("%d", &e.age);

                    printw("Enter salary: ");
                    refresh();
                    e.salary = 0;
                    scanw("%f", &e.salary);

                    printw("Enter overtime: ");
                    refresh();
                    e.overtime = 0;
                    scanw("%f", &e.overtime);

                    printw("Enter deduction: ");
                    refresh();
                    e.deduction = 0;
                    scanw("%f", &e.deduction);

                    e.total = e.salary + e.overtime - e.deduction;
                    emp[index] = e;

                    printw("Saved! Press any key...");
                    refresh();
                    getch();
                }

                noecho();
                curs_set(0);
            }
            else if (selected == 1)
            {
                found = 0;
                clear();

                for (j = 0; j < 20; j++)
                {
                    if (emp[j].id != -1)
                    {
                        printw("Index: %d  ", j);
                        printw("Id: %d  ", emp[j].id);
                        printw("Name: %s  ", emp[j].name);
                        printw("Age: %d  ", emp[j].age);
                        printw("Total: %.2f\n", emp[j].total);
                        found++;
                    }
                }
                if (found == 0)
                {
                    printw("No employees\n");
                }

                printw("Press any key to go back...");
                refresh();
                getch();
            }
            else if (selected == 2)
            {
                found = 0;
                delId = -1;

                clear();
                echo();
                curs_set(1);

                printw("Enter id to delete: ");
                refresh();
                scanw("%d", &delId);

                for (j = 0; j < 20; j++)
                {
                    if (delId >= 0 && emp[j].id == delId)
                    {
                        emp[j].id = -1;
                        found = 1;
                    }
                }
                if (found == 1)
                {
                    printw("Deleted\n");
                }
                else
                {
                    printw("Not found\n");
                }
                printw("Press any key...");
                refresh();
                getch();

                noecho();
                curs_set(0);
            }
            else if (selected == 3)
            {
                running = 0;
            }
        }
    }
    while (running == 1);

    endwin();  // yrag3 el terminal le 7alto el tabe3eya
    return 0;
}
