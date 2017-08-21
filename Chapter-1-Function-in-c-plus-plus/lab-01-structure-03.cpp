#include<iostream>
//#include<conio.h>
using namespace std;
struct Detail{
   char name[100];
   int age, bed_no, dd, mm, yy;
   char nature[100], gender[10];
   int ward_no, dd1, mm1, yy1;
   };

void getDetail(Detail &D){
   cout << "Enter patient name:: ";
   cin >> D.name;
   cout << "Enter age:: ";
   cin >> D.age;
   cout << "Enter bed number:: ";
   cin >> D.bed_no;
   cout << "Enter Nature of Illness:: ";
   cin >> D.nature;
   cout << "Enter date of birth in dd mm yy format:: ";
   cin >> D.dd >> D.mm >> D.yy;
   cout << "Enter gender:: ";
   cin >> D.gender;
   cout << "Enter ward number:: ";
   cin >> D.ward_no;
   cout << "Enter date of admission in dd mm yy format:: ";
   cin >> D.dd1 >> D.mm1 >> D.yy1;
   }


int main(){
    Detail D1;
    getDetail(D1);
    cout << "-----Patient Detail-----" <<endl;
    cout << "Patient Name::      " << D1.name << endl;
    cout << "Age::               " << D1.age << endl;
    cout << "Bed No.             " << D1.bed_no << endl;
    cout << "Nature of illness:  " << D1.nature <<endl;
    cout << "Date of birth:      " << D1.dd << "/" << D1.mm << "/" << D1.yy <<endl;
    cout << "Gender:             " << D1.gender << endl;
    cout << "Ward No:            " << D1.ward_no <<endl;
    cout << "Date of admission:  " << D1.dd1 << "/" << D1.mm1 << "/" << D1.yy1 <<endl;
   // getch();
    return 0;
}

