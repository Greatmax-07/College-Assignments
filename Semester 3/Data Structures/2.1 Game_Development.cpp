/*
Write a game development program that implements the Bubble Sort algorithm. 
The program will simulate a simple game where the player can input a set of numbers, 
and the numbers will be sorted using Bubble Sort to simulate a "level-up" scenario
where the player's scores are sorted in ascending order.
*/

#include<iostream>
using namespace std;
int main(){
int n;
int temp=0;
int score1[10];
int score2[10];
cout<<"Enter the No. of scores: ";
cin>>n;
cout<<"Enter the scores for Player 1: \n";
for(int i=0;i<n;i++){
    cout<<"Score "<<i+1<<": ";
    cin>>score1[i];
}
cout<<"Enter the scores for Player 2: \n";
for(int i=0;i<n;i++){
    cout<<"Score "<<i+1<<": ";
    cin>>score2[i];
}
cout<<"Your entered scores for both the players are: \n";
cout<<"Player 1:\n";
for(int i=0;i<n;i++){
    cout<<score1[i]<<"  ";
}
cout<<endl;
cout<<"Player 2:\n";
for(int i=0;i<n;i++){
    cout<<score2[i]<<"  ";
}
cout<<endl;
cout<<"Sorting Scores for both the Players: ";
for(int i=n;i>0;i--){
    for(int j=0;j<i-1;j++){
        if(score1[j]<score1[j+1]){
            temp=score1[j];
            score1[j]=score1[j+1];
            score1[j+1]=temp;
        }
        if(score2[j]<score2[j+1]){
            temp=score2[j];
            score2[j]=score2[j+1];
            score2[j+1]=temp;
        }
    }
}
cout<<"\nPlayer 1: ";
for(int k=0;k<n;k++){
    cout<<score1[k]<<"  ";
}
cout<<"\nPlayer 2: ";
for(int k=0;k<n;k++){
    cout<<score2[k]<<"  ";
}
cout<<endl;
if(score1[0]>score2[0]){
    cout<<"Player 1 wins!!";
}
else{
    cout<<"Player 2 wins!!";
}
return 0;
}
