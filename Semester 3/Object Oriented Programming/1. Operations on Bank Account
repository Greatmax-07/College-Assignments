/* Assignment 1: Operations on Bank Account
Implement a class to illustrate working of a bank account of a
customer that consists of following members Data members:
i. Name of the customer
ii. Account Type
iii. Account Number
iv. Available balance amount in the account
Member Functions:
i. Assign initial values using constructors.
ii. Deposit an amount in account
iii. Withdraw an amount
iv. Display account details
*/
#include<iostream>
using namespace std;
class bank_account{
	string name;
	string account_type;
	int account_number;
	float balance;
public:
	bank_account(string n, string at, int an, float b){
		name=n;
		account_type=at;
		account_number=an;
		balance=b;
	}
	void deposit(void);
	void withdraw(void);
	void display(void);
};
void bank_account::withdraw(){
	float withdraw_amount;
	cout<<"\n\nEnter Withdraw Amount:";
	cin>>withdraw_amount;
	balance-=withdraw_amount;
	cout<<"\nRemaining Balance:"<<balance;
}
void bank_account::deposit(){
	float deposit_amount;
	cout<<"\n\nEnter Deposit Amount:";
	cin>>deposit_amount;
	balance+=deposit_amount;
	cout<<"\nRemaining Balance:"<<balance;
}
void bank_account::display(){
	cout<<"\nName:"<<name;
	cout<<"\nAccount Type:"<<account_type;
	cout<<"\nAccount Number:"<<account_number;
	cout<<"\nBalance:"<<balance;
}
int main(){
	string n;
	string at;
	int an;
	float b;
	cout<<"Enter name:";
	cin>>n;
	cout<<"Enter Account Type:";
	cin>>at;
	cout<<"Enter Account Number:";
	cin>>an;
	cout<<"Enter Balance:";
	cin>>b;
bank_account obj1(n,at,an,b);
int choice;
char choice2;
do{
	cout<<"\nEnter your choice: (1.Withdraw  2.Deposit 3.Display Account Information) ";
	cin>>choice;
		switch (choice){
		case 1:
			obj1.withdraw();
		break;
		case 2:
			obj1.deposit();
		break;
		case 3:
			obj1.display();
		break;
		default:
		break;
		}
	cout<<"\nDo you want to continue? (Y/N)";
	cin>>choice2;
 } while(choice2=='Y'||choice2=='y');
	return 0;
}
