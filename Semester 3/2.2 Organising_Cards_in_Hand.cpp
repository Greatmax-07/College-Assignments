/*
Organizing Cards in a Hand:
When playing card games, players often use an approach similar to insertion sort
to  organize their cards. They pick one card at a time and insert it into the correct
position in their hand, maintaining a sorted sequence. Write a program that 
demonstrates how to organize (sort) cards in a hand using insertion sort.
*/

#include<iostream>
using namespace std;
int main(){
int n=0;
int temp=0;
cout<<"Enter the number of cards: ";
cin>>n;
int arr[n];
cout<<"Enter your card numbers (A-1; J-11; Q-12; K-13): \n";
for(int i=0;i<n;i++){
    cout<<"Card "<<i+1<<": ";
    cin>>arr[i];
}
for(int i=1;i<n;i++){
    int j=i-1;
    temp=arr[i];
    while(j>=0 && temp<arr[j]){
        arr[j+1]=arr[j];
        j=j-1;
    }
    arr[j+1]=temp;
}
cout<<"\nThe Sorted cards are: ";
for(int i=0;i<n;i++){
    cout<<arr[i] << " ";
}
return 0;
}
