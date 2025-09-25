/*
Develop a program in C++ to create a database of an employee's information system containing the following fields: 
Name, employee ID,Department, Date of Joining, Contact address, Telephone number etc. Construct the database with
suitable member functions to accept and print employee details. Make use of constructor types, destructor, 
static members, inline function and dynamic memory allocation using operators-new and delete.
*/
#include<iostream>
using namespace std;
class Employee{
    string name;
    string ID;
    string Department;
    string DOJ;
    string Add;
    int Ph_No;
public:
    inline void welcome(void){
    cout<<"\n------Welcome to the Employee Information System------\n";
    }
    Employee(string n,string id,string dep,string doj,string add, int ph);
    Employee(Employee &P1);
    Employee();
    ~Employee();
    static int count;
    void display(void);
};
int Employee::count;
Employee::Employee(string n,string id,string dep,string doj,string add, int ph){
    count++;
    cout<<"\nThis is parameterized Constructor"<<endl;
    name=n;
    ID=id;
    Department=dep;
    DOJ=doj;
    Add=add;
    Ph_No=ph;
};
Employee::Employee(){
    count++;
    cout<<"\nThis is Default Constructor"<<endl;
    name= "No name";
    ID= "0000";
    Department= "Error";
    DOJ="Error";
    Add="No address";
    Ph_No=00;
};
Employee::Employee(Employee &P1){
    count++;
    cout<<"\nThis is Copy Constructor"<<endl;
    name=P1.name;
    ID=P1.ID;
    Department=P1.Department;
    DOJ=P1.DOJ;
    Add=P1.Add;
    Ph_No=P1.Ph_No;
};
Employee::~Employee(){
    cout<<"\nDetails of Employee "<<count<<" Destroyed!!"<<endl;
    count--;
};
void Employee::display(void){
    cout<<"\nName: "<<name;
    cout<<"\nEmployee ID: "<<ID;
    cout<<"\nDepartment: "<<Department;
    cout<<"\nDate of Joining: "<<DOJ;
    cout<<"\nAddress: "<<Add;
    cout<<"\nPhone Number: "<<Ph_No;
    cout<<"\nNo. of Employees is: "<<count<<endl;
    };
int main(){
    string n;
    string id;
    string dep;
    string doj;
    string add;
    int ph;
    cout<<"Enter Employee Name: ";
    cin>>n;
    cout<<"Enter Employee ID: ";
    cin>>id;
    cout<<"Enter the Department of Employee : ";
    cin>>dep;
    cout<<"Enter Employee's Date of joining: ";
    cin>>doj;
    cout<<"Enter Employee's Address: ";
    cin>>add;
    cout<<"Enter Employee's Phone Number: ";
    cin>>ph;
    Employee obj1(n,id,dep,doj,add,ph);
    obj1.welcome();
    obj1.display();
    Employee obj2;
    obj2.welcome();
    obj2.display();
    Employee obj3(obj1);
    obj3.welcome();
    obj3.display();
    Employee *obj4= new Employee;
    obj4->welcome();
    obj4->display();
    delete obj4;
    return 0;
}
