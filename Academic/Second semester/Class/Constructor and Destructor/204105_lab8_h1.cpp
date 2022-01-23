#include<iostream>
using namespace std;
class Employee{
    public:
        string name;
        int age;
        string gender;
        int experience;
        string address;
        int id;
        string post;
        double salary;
        
        void print(){
            cout << "Employee ID: " << id << "\n";
            cout << "Name: " << name << "\n" << "Age : " << age << "\n";
            cout << "Gender: " << gender << "\n" <<"Experience : " << experience << " Years\n" << "Address: " << address << "\n";
            cout << "Job Post: " << post << "\n" << "Salary per month : " << salary << " Taka\n"; 
        }
};
class Company{
    public:
        string name;
        string location;
        string chairman;
        int eastablished;
        int revenue;
        int networth;
        int workers;
        
        Employee employee[100];
        int i=0; //To access the index of employee array
        
        //Companis general info
        void describeCompany(string company, string loc, string chair,int born){
            name = company;
            location = loc;
            chairman = chair;
            eastablished = born;
        }
        
        //Insiders info of a company
        void companyInfo( double brand_value,double net,int num_employee){
            revenue = brand_value;
            networth = net;
            workers = num_employee;
        }
        
        //First taking the general info of a employeer.
        void setEmployeeInfo(string name, int age, string gender,string address, int experience){
            employee[i].name = name;
            employee[i].age = age;
            employee[i].gender = gender;
            employee[i].address = address;
            employee[i].experience = experience;
        }
        
        //Recruiting new employee
        void addEmployee(string post, int salary){
            employee[i].id = i;
            employee[i].post = post;
            employee[i].salary = salary;
            i++; // increasing the index of array after recruiting a new worker
        }
        
        void getCompanyInformation(){
            cout << "Company Name: " << name << "\n" << "Location: " << location << "\n";
            cout << "Chairman: " << chairman << "\n" << "Eastablished : " << eastablished << "\n";
            cout << "Reveneu: " << revenue << " Million $USD\n" << "Net worth: " << networth << " Million $USD\n";
            cout << "Total workers: " << workers << "\n";
        }
        
        void getEmployeeInfo(int id){
            employee[id].print(); // Print employee's information of given id
        }
};
int main(){
    Company company;
    // Setting up compnies general information
    company.describeCompany("Beximco Co. & Ltd.", "Gazipur,Dhaka","A. S. F. Rahman",1972);
    company.companyInfo(304,85,70000);
    cout << "Information of Company\n\n";
    company.getCompanyInformation();
    cout << "\n";
    //Adding new employees
    company.setEmployeeInfo("Rahim", 32, "Male", "Gulshan,Dhaka" ,7);
    company.addEmployee("Manager", 70000);
    
    company.setEmployeeInfo("Karim", 30, "Male", "Gazipur,Dhaka" ,5);
    company.addEmployee("Clerk", 50000);
    
    company.setEmployeeInfo("Rahima", 31, "Female", "Gazipur,Dhaka" ,6);
    company.addEmployee("Analyst", 60000);
    
    cout << "The list of workers and their information:\n\n";
    for(int i = 0; i<3; i++){
        company.getEmployeeInfo(i);
        cout << "\n";
    }
    return 0;
}
