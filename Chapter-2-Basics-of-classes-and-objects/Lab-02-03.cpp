#include<iostream>
//#include<conio.h>
#include<math.h>
using namespace std;
class Point{
		float x, y, z;
	public:
        void assign(float a, float b, float c)
        {x =a; y = b; z = c;}
        void display();
        float distance();
   };


void Point :: display(){
	cout << "Coordinate is " << "(" << x <<","<<y<<","<<z<<")"<<endl;
}

float Point :: distance(){
	return sqrt(x*x + y*y + z*z);
   }

int main(){
   Point P;
   P.assign(1, 0, 1);
   P.display();
   cout << "Distance from origin = " << P.distance() << endl;
	//getch();
   return 0;
}
