/*Exception Handling
Design a program with the following functionalities:
1. A function to read two numbers(Double type)
2. A function to calculate division of these two numbers
3. A try block to detect and throw an exception when divided by zero condition occurs
4. Appropriate catch block to handle the exception thrown*/


#include<iostream>
using namespace std;
double a,b;
void accept(){
	cout<<"Enter dividend: ";
	cin>>a;
	cout<<"Enter divisor: ";
	cin>>b;
};
void divide(){
	try{
		if(b==0){
			throw(b);
		}
	}
	catch(double b){
		cout<<"Divisor cannot be 0 !";
		return;
	}
	cout<<"Quotient is: "<<a/b;
}
int main(){
	accept();
	divide();
	return 0;
}
