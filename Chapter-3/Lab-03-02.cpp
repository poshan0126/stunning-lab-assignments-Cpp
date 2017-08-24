#include<iostream>
  //#include<conio.h>
using namespace std;

class TollBooth{
        unsigned int total_cars;
        unsigned int total_amounts;
    public:
        TollBooth()
        {
            total_amounts = 0;
            total_cars = 0;
        }

        void payingCar();
        void noPayingCar();
        void display();

};

void TollBooth :: payingCar(){
 ++total_cars;
 total_amounts += 5;
}

void TollBooth :: noPayingCar(){
++total_cars;
}

void TollBooth :: display()
{
    cout << "\nTotal Cars: " << total_cars;
    cout << "\nTotal Amount: Rs " << total_amounts;
}

int main()
{
    TollBooth Kalanki;
    int choice;
    do{
    cout << "***Menu***";
    cout << "\n1. Add Paying Car";
    cout << "\n2. Add Non-Payin Car";
    cout << "\n3. Display Detail";
    cout << "\n4. Exit\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch(choice){
        case 1: Kalanki.payingCar();
                break;
        case 2: Kalanki.noPayingCar();
                break;
        case 3: Kalanki.display();
                break;
        case 4: return 0;
        default: cout << "Wrong Entry" << endl;

    }
    }while(1);
    //getch();
}








