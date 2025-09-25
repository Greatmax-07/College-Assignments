/*
Design an educational Institution that maintains a database of all staff members where the database 
is segregated into a number of classes having hierarchical relationships. Define all classes with
suitable data members and required member functions to build the database and fetch individual details.
*/
#include<iostream>
using namespace std;
class Staff{
protected:
    string name,dept;
    int ID;
public:
    void accept1();
    void display1();
};
class Teacher:public Staff{
    string subject;
    int experience;
public:
    void accept2();
    void display2();
};
class Support_Staff:public Staff{
    string designation;
    int exp;
public:
    void accept3();
    void display3();
};
void Staff::accept1(){
    cout<<"Enter staff name: ";
    cin>>name;
    cout<<"Enter department name: ";
    cin>>dept;
    cout<<"Enter staff ID: ";
    cin>>ID;
}
void Teacher::accept2(){
    cout<<"\n**** Enter Teacher Details ****\n";
    accept1();
    cout<<"Enter subject name: ";
    cin>>subject;
    cout<<"Enter teaching experience (years): ";
    cin>>experience;
}
void Support_Staff::accept3(){
    cout<<"\n**** Enter Support Staff Details ****\n";
    accept1();
    cout<<"Enter designation: ";
    cin>>designation;
    cout<<"Enter experience (years): ";
    cin>>exp;
}
void Staff::display1(){
    cout<<"Name: "<<name<<endl;
    cout<<"Department: "<<dept<<endl;
    cout<<"ID: "<<ID<<endl;
}
void Teacher::display2(){
    cout<<"\n======================================\n";
    cout<<"          TEACHER DETAILS";
    cout<<"\n======================================\n";
    display1();
    cout<<"Subject: "<<subject<<endl;
    cout<<"Experience: "<<experience<<" years"<<endl;
}
void Support_Staff::display3(){
    cout<<"\n======================================\n";
    cout<<"       SUPPORT STAFF DETAILS\n";
    cout<<"======================================\n";
    display1();
    cout<<"Designation: "<<designation<<endl;
    cout<<"Experience: "<<exp<<" years"<<endl;
}
int main(){
    int a=0,b=0;
    cout<<"Enter number of Teachers: ";
    cin>>a;
    cout<<"Enter number of Support Staff: ";
    cin>>b;
    Teacher t[a];
    Support_Staff s[b];
    for(int i=0;i<a;i++){
        cout<<"\n**** Teacher #"<<i+1<<" ****\n";
        t[i].accept2();
    }
    for(int i=0;i<a;i++){
        cout<<"\n**** Teacher #"<<i+1<<" ****\n";
        t[i].display2();
    }
    for(int i=0;i<b;i++){
        cout<<"\n**** Support Staff #"<<i+1<<" ****\n";
        s[i].accept3();
    }
    for(int i=0;i<b;i++){
        cout<<"\n**** Support Staff #"<<i+1<<" ****\n";
        s[i].display3();
    }
    return 0;
}
