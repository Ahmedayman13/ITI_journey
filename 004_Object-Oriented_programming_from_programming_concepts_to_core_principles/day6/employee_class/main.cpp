#include <iostream>
#include <string.h>

using namespace std;
class emp {
int id;
char name[30];
int age;
public:
    emp (int _id,char* _name){
        id = _id;
        strcpy(name,_name) ;
    }
    emp (int _id,char* _name, int _age){
        id = _id;
        strcpy(name,_name) ;
        age  = _age;
    }


    void setId(int _id){
    id = _id;
    }
    int getId (){
    return id;
    }
    void setName(char* _name){
    strcpy(name,_name);
    }
    const char* getName(){
    return name;
    }
    void setAge(int _age){
    age = _age;
    }
    int getAge (){
    return age;
    }
    void print(){
        cout<<id<< ':' << name << ':'<< age << endl;
    }

};
void print(emp x){
        cout<<x.getId()<< ':' << x.getName() << ':'<< x.getAge() << endl;
    }

int main()
{

    emp ahmed (10,"ahmed",35);
    print(ahmed);
    ahmed.print();
    return 0;
}
