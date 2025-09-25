/*
PROBLEM STATEMENT:
Load Balancing:
For example, imagine you have a set of servers that handle requests for a web application. 
The key to load balancing is using the hash value of a client's IP address or a request ID to 
determine which server should handle the request. The hash function is typically designed so 
that the data is evenly distributed across the servers, ensuring that no single server is overloaded. 
Write a program of a load balancing system
*/

#include <iostream>
using namespace std;
int main(){
    int key, hashValue, n, servers;
    char choice;
    cout<<"Enter number of servers: ";
    cin>>servers;
    cout<<"Enter number of requests: ";
    cin>>n;
    for (int i=0;i<n;i++){
        cout<<"Enter Request ID: ";
        cin>>key;
        hashValue=key%servers;
        cout<<"Your request has been sent to server no."<<hashValue<<endl;
    }
    cout<<"\nDo you want to send more requests? (Y or N) ";
    cin>>choice;
    if(choice=='Y'|| choice=='y'){
        main();
    }
    else{
        cout<<"Exiting Application!!";
    }
    return 0;
}
