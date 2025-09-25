/* 
Geometrical Shapes Area calculator
Define the base class Shape with two data members of any numeric type that
are employed to compute the area of respective shape. Add member
functions to input the data members values and display the area in base class
only. Derive two classes from base class namely, Triangle &amp; Rectangle.
Take the display function as virtual in base class and redefine it in the derived
classes. Using above classes , write a program to accept parameters for
triangle or rectangle and display the area Using Virtual Functions.
*/

#include<iostream>
using namespace std;
class shape{
	float length;
	float width;
	float height;
public:
	void input(){
		cout<<"Enter length: ";
		cin>>length;
		cout<<"Enter width: ";
		cin>>width;
		cout<<"Enter height: ";
		cin>>height;
	}
	float getlength(){ return length; }
	float getwidth(){ return width ; }
	float getheight(){ return height; }
	virtual void display()=0;
};

class triangle: public shape{
public:
	void display(){
		cout<<"Area is (from triangle class): "<<0.5*getlength()*getheight()<<endl;
	}
};

class rectangle: public shape{
public:
	void display(){
		cout<<"Area is (from rectangle class): "<<getlength()*getwidth()<<endl;;
	}
};

int main(){
	shape *ptr1, *ptr2;
	triangle t;
	rectangle r;
	ptr1=&t;
	cout<<"Triangle details: "<<endl;
	ptr1->input();
	ptr1->display();
	ptr2=&r;
	cout<<"Rectangle details: "<<endl;
	ptr2->input();
	ptr2->display();
	return 0;
}
