#include<iostream>
#include<string>
#define MAX 5


using namespace std;

class Browser{
  public:
    string A[MAX];
    int top;
     Browser(){
      top=-1;
    }
    void push(string value){
      if(top==MAX-1){
        cout<<"The Browser History Is Full\n";
      }
      else{
        top++;
        A[top]=value;
        cout<<value<<"\n";
      }
    }
    void pop(){
      if(top==-1){
        cout<<"Your Browser History Is Empty";
      }
      else{
      cout<<"\n"<<A[top]<<"is deleted successfully from your browser history";
      top--;
      }
    }
    void display(){
      if(top==-1){
        cout<<"Your Browser History Is Empty";
      }
      else{
        cout<<"\n This is your Browser History";
        for(int i=top;i>=0;i--){
          cout<<"\n"<<A[i]<<endl;
        }
      }
    }
    void peak(){
      if(top==-1){
        cout<<"\n"<<"Your Browser History Is Empty";
      }
      else{
        cout<<"\n"<<A[top]<<"is your Currentpage"<<endl;
      }
    }
    
    
};
int  main(){
Browser b;
b.push("google.com");
b.push("github.com");
b.push("chrome.com");
b.push("chatgpt.com");
b.push("git.com");
b.push("xyz.com");
b.display();
b.pop();
b.pop();
b.peak();
b.push("xyz.com");
b.display();
return 0;
}
