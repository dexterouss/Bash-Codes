#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,b,c;
	float r1,r2;
	cout<<"given the function: ax^2+bx+c\n";
	cout<<"enter coefficients a,b and constant c: ";
	cin>>a>>b>>c;
	r1=(-b + sqrt(pow(b,2)-(4*a*c)))/2*a;
	r2=(-b - sqrt(pow(b,2)-(4*a*c)))/2*a;
	cout<<"roots of equation are : "<<r1<<" and "<<r2<<"\n";
	return 0;
}


