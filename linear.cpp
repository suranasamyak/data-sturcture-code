#include <iostream>
using namespace std;

int main(){
  int A[]= {10,20,30,40,50,60,70,80};
  int flag=0,key=30;
  for(int i=0;i<9;i++){
    if(key==A[i]){
      flag=1;   

    }   
  }
  if(flag==1)
    cout<<"Element Found";
  else
    cout<<"\n Element Not Found";
return 0;
}
