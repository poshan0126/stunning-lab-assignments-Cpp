#include<iostream>
//#include<conio.h>
using namespace std;

class Rational{
		int num, den;
	public:
   		void assign();
      		void display();
};

void Rational :: assign(){
	cout << "Enter numerator and denominator: ";
  	 cin >> num >> den;
   }

void Rational :: display(){
	cout << "Rational number = " << num << "/" << den << endl;
   }

int main(){
	Rational R;
  	 R.assign();
   R.display();
   // getch();
   return 0;
}
