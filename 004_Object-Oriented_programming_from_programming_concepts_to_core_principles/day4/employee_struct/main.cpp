#include <iostream>
#include <string>
void clearScreen()
{
    // \033[2J clears the entire screen, \033[H moves the cursor to (1,1)
    std::cout << "\033[2J\033[H" << std::flush;
}
using namespace std;
struct emp
{
    int id;
    string name;
    int age ;
    int overtime;
    int deduction;
    int salary;
    int total_salary;
};
void empInput(emp& x);

int main()
{
    emp employees[10];
    for(int i=0;i<10;i++){
        empInput(employees[i]);
    }

/*
    cout<<"ID: "<<ahmed.id<<endl;
    cout<<"Name: "<<ahmed.name<<endl;
    cout<<"Age: "<<ahmed.age<<endl;
    cout<<"OverTime: "<<ahmed.overtime<<endl;
    cout<<"Deduction: "<<ahmed.deduction<<endl;
    cout<<"Salary: "<<ahmed.total_salary<<endl; */




    return 0;
}

void empInput(emp& x){
cout<<"Please Enter ID"<<endl;
    cin>>x.id;
    cout<<"Please Enter name"<<endl;
    cin>>x.name;

    cout<<"Please Enter age"<<endl;
    cin>>x.age;

    cout<<"Please Enter deduction"<<endl;
    cin>>x.deduction;

    cout<<"Please Enter overtime"<<endl;
    cin>>x.overtime;

    cout<<"Please Enter salary"<<endl;
    cin>>x.salary;
    x.total_salary=(x.salary+x.overtime)-x.deduction;
        clearScreen();
}
