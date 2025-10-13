/*Array operations:
Design a program with a template for sorting the accepted array and displaying it 
using integer or float type data. Implement any sorting type using Generic Programming*/
#include<iostream>
using namespace std;
template <class T>
void sort(T arr[], int n){
	for(int i=0;i<n-1;i++){
		int min_index=i;
		for(int j=i+1;j<n;j++){
			if(arr[j]<arr[min_index]){
				min_index=j;
			}
		}
		T temp=arr[min_index];
		arr[min_index]=arr[i];
		arr[i]=temp;
	}
}
template <class T>
void display(T arr[], int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}
int main(){
	int choice,n;
	while(1){
		cout<<"Enter the datatype of your array (1.Integer / 2.Float / 3.Exit): ";
		cin>>choice;
		cout<<"Enter the no. of elements: ";
		cin>>n;
		if(choice==1 || choice==2 || choice==3){
			if(choice==1){
				int arr[n];
				for(int i=0;i<n;i++){
					cout<<"Enter element "<<i+1<<":";
					cin>>arr[i];
				}
				sort(arr,n);
				cout<<"\nSorted integer array:"<<endl;
				display(arr,n);
				cout<<"\n\n";
			}
			if(choice==2){
				float arr[n];
				for(int i=0;i<n;i++){
					cout<<"Enter element "<<i+1<<":";
					cin>>arr[i];
				}
				sort(arr,n);
				cout<<"\nSorted float array:"<<endl;
				display(arr,n);
				cout<<"\n\n";
			}
			if(choice==3){
				cout<<"Exiting application...";
				break;
			}
		}
		else{
			cout<<"Wrong choice !! Try again"<<endl;
		}
	}
	return 0;
}
