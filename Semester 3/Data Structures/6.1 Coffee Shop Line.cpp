/*Coffee Shop Line (Simple Queue):
Arrival: Customers arrive at the coffee shop and stand in line. 
Order Processing: The first customer in line gets their order taken, and the barista starts making the coffee.
Serving: Once the first customer is served, they leave the queue, and the next customer in line moves forward to be served. 
Write a program to implement a simple queue*/
#include<iostream>
using namespace std;
class coffee{
    int queue[10];
    int rear=-1;
    int front=-1;
    int token=0;
public:
    bool isEmpty(){
        return (front==-1 || front>rear);
    }  
    bool isFull(){
        if(rear==9){
            cout<<"Queue is full. Please wait."<<endl;
            return 1;
            }
            return 0;
        }
    void enqueue(){
        if(!isFull()){
            if(front==-1){
                front=0;
            }
            token++;
            rear++;
            queue[rear]=token;
            cout<<"Token no. "<<queue[rear]<<" registered."<<endl;
            }
        }
    int dequeue(){
        if(isEmpty()){
            cout<<"No orders to process!!"<<endl;
            return -1;
        }
        if(!isEmpty()){
            int order=queue[front];
            front++;
            return order;
            }
        }

    };
int main(){
    coffee c;
    int choice;
    cout<<"---COFFEE SHOP---"<<endl;
    cout<<"1. Issue Token \n2. Process Order \n3. Exit"<<endl;
    while(1){
        cout<<"Enter your choice: ";
        cin>>choice;
        if(choice==1){
            c.enqueue();
            }
        else if(choice==2){
            int processed = c.dequeue();
            if(processed!=-1){
                cout<<"Order no. "<<processed<<" processed"<<endl;
            }
        }
        else if(choice==3){
            cout<<"Exiting the Coffee Shop...";
            break;
            }
        else{
            cout<<"Invalid choice."<<endl;
            break;
        }
    }
    return 0;
}
