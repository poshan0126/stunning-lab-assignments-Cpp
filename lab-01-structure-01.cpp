#include<iostream>
	//#include<conio.h>
	using namespace std;
struct Phone{
         int area_code;
         int exchange;
         int number;
};

int main(){
    Phone me, y;
    me.area_code = 212;
    me.exchange = 767;
    me.number = 8900;

    cout << "Enter your area code, exchange and number:: ";
    cin >> y.area_code >> y.exchange >> y.number;

    cout << "My number is " << "(" << me.area_code
         <<")" << me.exchange << "-" << me.number << endl;
    cout << "Your number is " << "(" << y.area_code
         << ")" << y.exchange << "-" << y.number << endl;
   // getch();
    return 0;
}
