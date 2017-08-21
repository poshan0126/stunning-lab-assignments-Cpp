#include<iostream>
//#include<conio.h>
using namespace std;

class Rational{
		int num, den;
	public:
   		    void assign(int , int );
      		void display();
      		void swap(Rational & );
};

void Rational :: assign(int n, int d){
	num = n; den = d;
   }

void Rational :: display(){
	cout << "Rational number = " << num << "/" << den
	     << " = " << (num * 1.0 / den) << endl;
   }
void Rational :: swap(Rational & r){
    int temp;
    temp = r.num;
    r.num = r.den;
    r.den = temp;
}

int main(){
	Rational x;
    x.assign(22, 7);
    x.display();
    x.swap(x);
    cout << "After Inverse" << endl;
    x.display();
   // getch();
   return 0;
}
