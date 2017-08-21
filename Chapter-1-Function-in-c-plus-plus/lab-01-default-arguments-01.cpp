#include<iostream>
//#include<conio.h>
using namespace std;
inline float simpleInterest(int p, int t, float r = 1.5){
    return (p*t*r)/100;
}

int main(){
    int principal,time;
    cout << "Enter Principal amount and Time period:: ";
    cin >> principal >> time;
    cout << "Simple Interest:: "<< simpleInterest(principal,time) << endl;
   // getch();
    return 0;
}
