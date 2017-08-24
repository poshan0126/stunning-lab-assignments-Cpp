#include<iostream>
//include<conio.h>
#include<string.h>
using namespace std;

class Person{
        char name[33], gender[6];
        int age; long telephone;
    public:
        void assign(char * n, int a, char * g, long t){
        strcpy(name, n);
        strcpy(gender, g);
        age = a; telephone = t;
        }

        void display();

};

void Person :: display()
{
    cout << "Name: " << name << "\nAge: " << age
         << "\nTelephone: " << telephone
         << "\nGender: " << gender << endl;
}

int main()
{
    Person P1;
    P1.assign("Ramesh", 12, "Male", 9847585858);
    P1.display();
    //getch();
    return 0;
}
