#include <iostream>
#define size 5
using namespace std;
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

    int arr[4][4]={{1,2,3},{1,2,3},{1,2,3}};

// input

    for (int i = 0 ; i<3;i++){
            int sum = 0;
        for (int j = 0 ;j<3;j++){
                cin>>arr[i][j];
                sum += arr[i][j];
        }
        arr[i][3] = sum;
    }
    clearScreen();
    int row = 6,col= 30,gapx=4,gapy=4;


    gotoxy(col,row);

// output

        for (int i = 0 ; i<4;i++){
            int sum = 0;
        for (int j = 0 ;j<3;j++){
                sum+=arr[j][i];
        }
        arr[3][i] = sum/3;
    }
    for (int i = 0 ; i<4;i++){
            for (int j = 0 ;j<4;j++){
                    gotoxy(col + j * gapx,row + i * gapy);
                    cout<<arr[i][j];

            }


            cout<<endl;
        }


    return 0;
}
