/*Sequential Files Operations
Develop a system that defines inventory class with suitable data members and
member functions. Perform read and write operations using class objects.*/
#include<iostream>
#include<fstream>
using namespace std;
class inventory{
    char name[25];
    char ID[10];
    float price;
    int stock;
public:
    void accept(){
    cout<<"Enter name of the item: ";
    cin>>name;
    cout<<"Enter item ID: ";
    cin>>ID;
    cout<<"Enter price of the item: ";
    cin>>price;
    cout<<"Enter available quantity of the item: ";
    cin>>stock;
    }
    void display(){
        cout<<"\nItem Name: "<<name<<endl;
        cout<<"Item ID: "<<ID<<endl;
        cout<<"Item Price: "<<price<<endl;
        cout<<"Item Stock: "<<stock<<endl;
    }
};
int main(){
    ofstream file_obj;
    inventory obj1[5], obj2[5];
    int n;
    cout<<"Enter the number of items you want to save: ";
    cin>>n;
    file_obj.open("Input.txt", ios::out | ios::binary);
    for(int i=0;i<n;i++){
        obj1[i].accept();
        file_obj.write((char *)&obj1[i], sizeof(obj1[i]));
    }
    file_obj.close();
    ifstream file_obj2;
    file_obj2.open("Input.txt", ios::in | ios::binary);
    for(int i=0;i<n;i++){
        file_obj2.read((char *)&obj2[i], sizeof(obj2[i]));
        obj2[i].display();
        }
    file_obj2.close();
    cout << "\nData successfully written to file.\n\n";
    return 0;
}
