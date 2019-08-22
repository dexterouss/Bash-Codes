#include<iostream>
using namespace std;

int recurr(int);
int main()
{
	int a,b;
	cout<<"enter 4 digit no. : ";
	cin>>a; b=a;
	cout<<"The combined sum of " <<b <<" is " <<recurr(a) <<"\n";
	return 0;
}
int recurr(int x)
{
	if(x<=1)
		return 1;
	else
		return (x%10)+recurr(x/10);
}
