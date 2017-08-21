#include<iostream>
//#include<conio.h>
using namespace std;
inline float area(float l){
    return 6 * l * l;
}

inline float area(float h, float r){
	return 2 * 3.14 * r * (r+h);
   }

inline int area(int l, int b){
	return l * b;
	}

int main(){
    float radius, l_cube, hc;
    int l_rec, b_rec;

    cout << "Enter side of a cube:: ";
    cin >> l_cube;
    cout << "Area Cube: " << area(l_cube) << endl;

    cout << "Radius, Height For Cylinder: ";
    cin >> radius >> hc;
    cout << "Area Cylinder = " << area(hc, radius) << endl;

    cout << "Length, breadth for rectangle:: ";
    cin >> l_rec >> b_rec;
    cout << "Area Rectangle = " << area(l_rec, b_rec) << endl;
   // getch();
    return 0;
}
