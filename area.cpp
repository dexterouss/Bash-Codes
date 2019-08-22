#include<iostream>
#include<cmath>
using namespace std;
void menu();
void circle(){
 float pi=3.14,r;
 cout<<"enter radius:";
 cin>>r;
 cout<<"area of circle:"<<pi*r*r<<"\n";
 menu();

}
void rec(){
 float l,b;
 cout<<"enter lenght and breadth:";
 cin>>l>>b;
 cout<<"area of rectangle:"<<l*b<<"\n";
 menu();

}
void square(){
 float s;
 cout<<"enter side of sqaure:";
 cin>>s;
 cout<<"area of square:"<<s*s<<"\n";
 menu();

}

void quit(){
  exit(0);
} 

void menu(){
  int n;
  cout<<"choose an option\n 1.area of circle \n 2.area of rectangle \n 3.area of square \n 4.exit program \n" ;
  cin>>n;
  switch(n){
  case 1:circle();
         break;
  case 2:rec();
         break;
  case 3:square();
         break;
  case 4:quit();
         break;
  default:break;
  }
}


int main(){
  menu();
  return 0;
}
