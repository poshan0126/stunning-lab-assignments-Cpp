#include<iostream>
//#include<conio.h>
using namespace std;
void computeSphere(float &v, float &s, float r){
    v = (4/3) * 3.14 * r * r * r;
    s = 4 * 3.14 * r * r * r;
}

int main(){
    float radius, volume, area;
    cout << "Enter Radius:: ";
    cin >> radius;
    computeSphere(volume, area, radius);
    cout << "Volume of sphere:: "<< volume
         <<"\nSurface area of sphere:: " << area << endl;
    //getch();
    return 0;
}

