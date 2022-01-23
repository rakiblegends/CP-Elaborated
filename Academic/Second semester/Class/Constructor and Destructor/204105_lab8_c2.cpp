#include<iostream>
#include<math.h>
using namespace std;

class Triangle{
    int side1,side2,side3;
    public:
        Triangle(){
            side1 = 3;
            side2 = 4;
            side3 = 5;
        }
        Triangle(int a,int b, int c){
            side1 = a;
            side2 = b;
            side3 = c;
        }
        float get_area(){
            float s = (side1+side2+side3)/2;
            float area = sqrt(s*(s-side1)*(s-side2)*(s-side3));
            return area;
        }
        int get_perimeter(){
            return side1+side2+side3;
        }
        void print(){
            cout << "Area: " << get_area() << "\n";
            cout << "Perimeter: " << get_perimeter() << "\n";
        }
};
int main(){
    Triangle t1;
    Triangle t2(3,4,5);
    cout << "Output for the default constructor: \n";
    t1.print();
    cout << "Output for the parameterized constructor: \n";
    t2.print();
    return 0;
}
