#include <iostream>
#include <string.h>

using namespace std;
class person {
protected:
int id;
char name[20];
int age;
public:

    person(int _id, char* _name,int _age=0){
        strcpy(name,_name);
        id=_id;
        age=_age;
        cout<<"ctor of parent person worked first!!"<<endl;
    }
    void setId(int _id){id=_id;}
    int getId(){return id;}
    void setAge(int _age){age= _age;}
    int getAge(){return age;}
    void setName(char* _name){strcpy(name,_name);}
    char* getName(){
    return name;
    }
    void print(){
        cout << "person data " << endl;
        cout<<id<<  ':' << name << ':' << age <<endl;
    }
    ~person(){
        cout<<"parent person died last :( "<<endl;
    }
};
class emp : public person{
    float salary;
public:
    emp(int _id, char* _name, int _age, float _salary=15000 ):person( _id,  _name, _age){
        cout<< "ctor of child emp worked second !!"<<endl;
        salary=_salary;

    }
    void setSalary(float _salary){
        salary=_salary;
    }
    float getSalary(){
        return salary;
    }
    void print(){
        cout<<"emp data"<<endl;
        person::print();
        cout<<"with Salary " << salary<<endl;
    }

    void setAge(int _age){
        if(_age >25)
        age= _age;
        else
            age = 25;
            cout<<"age is not correct"<<endl;
        }
        ~emp (){
                cout<<"child emp died first :( "<<endl;

        }



};
class student:public person{
    int grade;
public:
    student(int _id, char* _name, int _age, int _grade ):person( _id,  _name, _age){
        cout<< "ctor of child student worked second !!"<<endl;
        grade=_grade;

    }
    void setGrade(int _grade){
        grade=_grade;
    }
    int getGrade(){
        return grade;
    }
    void print(){
        cout<<"student data"<<endl;
        person::print();
        cout<<"with grade " << grade<<endl;
    }

    void setAge(int _age){
        if(_age >5)
        age= _age;
        else
            age = 5;
            cout<<"age is not correct"<<endl;
        }
        ~student (){
                cout<<"child student died first :( "<<endl;

        }

};


int main()
{
    emp mohamed(10,"mohamed",24);
    mohamed.setAge(24);
    mohamed.print();
    student karem(15,"kareem",7,2);
    karem.print();
    karem.setAge(2);
    return 0;
}
