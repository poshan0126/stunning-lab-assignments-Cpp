#include<iostream>
//#include<conio.h>
using namespace std;

inline int multiply(int m, int n){
    return m * n;
}

inline float divide(int m, int n){
	return (m * 1.0) / n;
   }

int main(){
    int num1, num2 ;
    cout << "Please, Enter two number"<< endl;
    cout << "Num1: ";
    cin >> num1;
    cout << "Num2: ";
    cin >> num2;
    cout << num1 << " * " << num2
         << " = " << multiply(num1, num2) << endl;
    cout << num1 << " / " << num2
         << " = " << divide(num1, num2) << endl;
    //getch();
    return 0;
}
