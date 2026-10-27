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
void empInput(emp* x);
void empOutput(emp *ptr,int index);


int main()
{
    int size,input;
    cout<<"Please Enter The number of Employees"<<endl;
    cin>>size;
    emp *ptr= new emp[size];
    for(int i=0; i<size; i++)
    {
        empInput(ptr+i);
    }

    cout << "plz enter the index of employeer you want to search for"<<endl;
    cin>>input;
    empOutput(ptr,input);







    return 0;
}

void empInput(emp* x)
{
    cout<<"Please Enter ID"<<endl;
    cin>>x->id;
    cout<<"Please Enter name"<<endl;
    cin>>x->name;

    cout<<"Please Enter age"<<endl;
    cin>>x->age;

    cout<<"Please Enter deduction"<<endl;
    cin>>x->deduction;

    cout<<"Please Enter overtime"<<endl;
    cin>>x->overtime;

    cout<<"Please Enter salary"<<endl;
    cin>>x->salary;
    x->total_salary=(x->salary+x->overtime)-x->deduction;
    clearScreen();
};

void empOutput(emp* ptr,int index){


        cout<<"ID: "<<ptr[index].id<<endl;
        cout<<"Name: "<<ptr[index].name<<endl;
        cout<<"Age: "<<ptr[index].age<<endl;
        cout<<"Deduction: "<<ptr[index].deduction<<endl;
        cout<<"Overtime: "<<ptr[index].overtime<<endl;
        cout<<"Salary: "<<ptr[index].total_salary<<endl;
        }


/*or (int i = 0; i<size; i++)
    {
        cout<<"ID: "<<ptr[i].id<<endl;
        cout<<"Name: "<<ptr[i].name<<endl;
        cout<<"Age: "<<ptr[i].age<<endl;
        cout<<"Deduction: "<<ptr[i].deduction<<endl;
        cout<<"Overtime: "<<ptr[i].overtime<<endl;
        cout<<"Salary: "<<ptr[i].total_salary<<endl;
    }
*/
