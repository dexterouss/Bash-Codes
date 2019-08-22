#include<iostream>
using namespace std;
int runningsum(int);
int main(){
int i,sum=0;
cout<<"enter num:";
cin>>i;
sum=runningsum(i);
return 0;
}

int runningsum(int a){
  int b;
  cout<<"enter num: ";
  cin>>b; 
  a=a+b;
  
  if(b!=0){
    cout<<"sum: "<<a <<"\n";
    return runningsum(a);
  }
  else{
   cout<<"terminate\n";
   exit(0);
  }
}  
