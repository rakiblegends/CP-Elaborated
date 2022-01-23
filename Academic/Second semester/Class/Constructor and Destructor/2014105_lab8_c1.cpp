#include<iostream>
using namespace std;
class Student{
  string name;
  int roll_no;
  string address;
  int phone_no;
  public:
    void set_value(string s,int roll,string addr, int phone){
        name = s;
        roll_no = roll;
        address = addr;
        phone_no = phone;
        
    }
    void print(){
        cout << "Name : " << name << "\nRoll no: " << roll_no << "\n" << "Address : " << address << "\n";
        cout << "Phone No: " << phone_no << "\n";
    }
};
int main(){
    Student student1,student2;
    cout << "Information of first student: \n";
    student1.set_value("John",2,"Gazipur",1987);
    student1.print();
    student2.set_value("Sam",3,"Dhaka",1986);
    cout << "Information of second student: \n";
    student2.print();
    return 0;
}
