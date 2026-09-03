#include<iostream>
#define MAX 5
using namespace std;

class Stack{
  public:
    int A[MAX];
    int top;
    Stack(){
      top=-1;
    }
    void push(int value){
      if(top==MAX-1){
        cout<<"\n Stack Is Overflow";
      }
      else{
      top++;
      A[top]=value;
      cout<<"\n"<<value<<"is Pushed into Stack\n";
      }
    }
    void pop(){
      if(top==-1){
        cout<<" \n Stack Is Underflow";
      }
      else{
        cout<<"\n"<<A[top]<<"is Poped from Stack";
        top--;
      }
    }
    void display(){
      if(top==-1){
        cout<<"\n Stack is Empty";
      }
      else{
        cout<<"\n The Element in the Stack is:";
        for(int i=top;i>=0;i--){
          
          cout<<A[i]<<endl;
        }
      }
    }
      void peak(){
        if(top==-1){
          cout<<"Stack is Empty";
        }
        else{
          cout<<"\n"<<A[top]<<"is  peak point current stack ";
        }
      }
};
int main(){
Stack s;
s.push(10);
s.push(20);
s.push(30);
s.push(40);
s.push(50);
s.display();
s.peak();
s.pop();
s.pop();
s.display();
return 0;
}
