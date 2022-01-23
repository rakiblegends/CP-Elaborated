#include<bits/stdc++.h>
using namespace std;
//Learning constructor and destructor
//Constructor is used to initialization value when declaring objects;
class Rectangle{
    int a,b;
    public:
        //Creating constructor
        Rectangle(){//when no parameter is used then it is called default constructor
            a = 10; b= 10; // default constructor
        }
        Rectangle(int h, int w){// Parameterized constructor
            a = h;
            b = w;
            //we can also use default parameter instead of overloading the fuction
        }
        Rectangle(int h){
            a = h;
            b = 10;//width is default;
        }
        void set_values(int height, int width){ // Using function to init value;
            a = height;
            b = width;
        }
        int get_area(){
            return a*b;
        }
        int get_perimeter(){
            return 2*(a+b);
        }
        void display(){
            cout << get_area() << " " << get_perimeter() << "\n";
        }
};
int main (){
    Rectangle r(10,13),r1,r2(15);
    // r.set_values(10,13);
    r.display();
    r1.display();//This one will call default constructor if default constructor is in class 
    //otherwise the program will trow an error;
    r2.display();
    return 0;
}