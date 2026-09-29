#include<iostream>
using namespace std;

int main(){
  int queue[5];
  int front=-1, rear=-1;
  //Enqueue 
  rear++;
  queue[rear]= 10;
  if(front==-1){
    front=0;
  }
  rear++;
  queue[rear]=20;
  rear++;
  queue[rear]=30;
  cout<<"Queue Element";
  for(int i=front; i<=rear; i++){
    cout<<queue[i]<<"";
    
  }
  cout<<"\n Delete element"<<queue[front];
  front++;
  cout<<"\n queue after deletion";
  for(int i=front;i<=rear; i++){
    cout<<queue[i]<<"";
  }
  return 0;
     
  
}
