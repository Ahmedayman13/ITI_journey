#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main()
{
    char fname[20];
    char lname[20];
    char fullname[40];
    cin>>fname;
    cin>>lname;
    strcpy(fullname,fname);
    strcat(fullname," ");
    strcat(fullname,lname);
    cout<<fullname;


    return 0;
}
