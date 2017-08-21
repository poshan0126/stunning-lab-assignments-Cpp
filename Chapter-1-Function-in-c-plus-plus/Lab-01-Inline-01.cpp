// Using inline function to calculate the square of a number.
#include<iostream>
//#include<conio.h>
using namespace std;

inline int square(int num){
    return num * num;
}

int main()
{
    int number;
    cout << "Please, Enter a number to find its square: " ;
    cin >> number;
    cout << "Square of " << number
         << " = " << square(number) ;
   // getch();
    return 0;
}
