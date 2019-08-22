#include<iostream>

using namespace std;

int factorial(int n)
{
	if(n==0 || n==1)
		return 1;
	else
		return n*factorial(n-1);
}



int main()
{
	int a;
	cout<<"Enter a number to find factorial: ";
	cin>>a;
	cout<<"\n\nFactorial in ascending order\n";
	for(int i=1; i<=a; i++)
	    {
		cout<<factorial(i) <<"   ";
	    }
	cout<<"\n\nFactorial in descending order \n";
	for(int i=a; i>0; i--)
	    {
		cout<<factorial(i) <<"   ";
	    }
	cout<<"\n";
	return 0;
}
