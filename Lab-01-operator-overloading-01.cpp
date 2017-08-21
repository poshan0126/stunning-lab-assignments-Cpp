#include<iostream>
//#include<conio.h>
using namespace std;

inline int volume(int l){
    return l * l * l;
}

inline float volume(int h, float r){
	return 3.14 * r * r * h;
   }

inline int volume(int l, int b , int h){
	return l * b * h;
	}

int main(){
    float radius;
    int l_cube, h_cyl, l_rec, b_rec, h_rec;

    cout << "Enter side of a Cube:: ";
    cin >> l_cube;
    cout << "Volume of cube is " << volume(l_cube) << endl;

    cout << "Enter Radius and Height for Cylinder:: ";
    cin >> radius >> h_cyl;
    cout << "Volume of cylinder is " << volume(h_cyl, radius) << endl;

    cout << "Enter length, breadth and height for Rectangle:: ";
    cin >> l_rec >> b_rec >> h_rec;
    cout << "Volume of rectangle is " << volume(l_rec, b_rec, h_rec) << endl;
   // getch();
    return 0;
}

