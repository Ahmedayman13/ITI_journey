#include <iostream>



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

    int size;
    cin>>size;

    // one dimensional array cour sum max min and search for value
    int *ptr=new int[size];
    int sum = 0,max,min ;
    int search;
    bool flag = false ;
    int index ;

// take inputs from user
    for (int i = 0 ; i < size;i++){
        cout<<"Please Enter value no."<<i+1<<endl;
        cin >> ptr[i];
        sum += ptr[i];
    }
    clearScreen();
    cout<< "The values you entered are:"<<endl;
    for (int i = 0 ; i < size ; i++){
        cout<<ptr[i]<<"    " ;
    }
cout << endl;
// find max and min
    max = ptr[0];
    min = ptr[0];
    for (int i = 1 ; i < size ;i++){
            if (ptr[i]>max)
                max = ptr[i];
            if (ptr[i]<min)
                min = ptr[i];

    }
 // search
        cout << "Please Enter the Value you want to search for"<<endl;
        cin>>search;

    for (int i = 0 ; i < size;i++){
            if (search == ptr[i]){
                flag = true;
                index = i;

                break;
            }
    }
    if (flag == true){
        cout<<"Your Value was found at index "<<index<<endl;
    } else {
        cout<<"Your Value was not found "<<endl;
    }


    cout << endl;

    cout << "The sum of your values is "<< sum <<endl;
    cout << "The Max value in you items is "<< max<<endl;
        cout << "The Min value in you items is "<< min<<endl;


    return 0;
}
