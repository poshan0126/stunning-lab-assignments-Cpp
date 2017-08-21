
#include<iostream>
//#include<conio.h>
using namespace std;
struct Dim{
	int feet;
   float inch;
   };

struct Volume{
   Dim length;
   Dim breadth;
   Dim height;
};

int main(){
    Volume V;
    V.length.feet = 12; V.length.inch = 5;
    V.breadth.feet = 7; V.breadth.inch = 6;
    V.height.feet = 8; V.height.inch = 8;

    float l = V.length.feet + V.length.inch/12;
    float b = V.breadth.feet + V.breadth.inch/12;
    float h = V.height.feet + V.height.inch/12;

    cout << "Volume(sq. feet) = " << l * b * h << endl;
   //getch();
    return 0;
}
