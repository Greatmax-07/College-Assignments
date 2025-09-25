/*Write a program that implements a simple task scheduler using a singly linked list.
Each node in the linked list represents a task with its priority and execution time. 
Tasks are scheduled based on their priority, with higher priority tasks being executed first.
*/
#include <iostream>
#include <string>
using namespace std;
class List{
    string task_name;
    int exe_time;
public:
    int priority;
    List *next;
    void display();
    List(string n,int p,int e);
};
List::List(string n,int p,int e){
        task_name=n;
        priority=p;
        exe_time=e;
        next=NULL;
    };
void List::display(){
        cout<<"\nTask Name:"<<task_name<<endl;
        cout<<"Task Priority:"<<priority<<endl;
        cout<<"Task Execution Time:"<<exe_time<<endl;
    }
int main(){
    List *head=NULL;
    List *temp=NULL;
    List *pre=NULL;
    List *curr=NULL;
    string tn;
    int n,ext,pri;
    cout<<"Enter Number of tasks:";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter Name of task:";
        cin>>tn;
        cout<<"Enter Priority of task (Higher is more imp):";
        cin>>pri;
        cout<<"Enter Execution Time of task:";
        cin>>ext;
        if(head==NULL){
            head=new List(tn,pri,ext);
        }
        else{
            temp=new List(tn,pri,ext);
            pre=head;
            curr=head->next;
            if(head->priority<temp->priority){
                temp->next=head;
                head=temp;
            }
            else{
                while(curr!=NULL&&curr->priority>temp->priority){
                    pre=curr;
                    curr=curr->next;
                }
            pre->next=temp;
            temp->next=curr;
            }
        }
}
    cout<<"\n\n";
    cout<<"-----------Task List------------"<<endl;
    curr=head;
    while(curr!=NULL){
        curr->display();
        curr=curr->next;
    }
    return 0;
}
