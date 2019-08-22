#include<iostream>
using namespace std;

void loopsum1(); void loopsum2();

int main()
{
	loopsum1();
	loopsum2();
	return 0;
}

void loopsum1()
{
	int n1,n2,sum;
        sum=0;
        cout<<"Enter a 4 digit number: ";
        cin>>n1;
        n2=n1;
        do
        {
                sum=sum+(n1%10);
                n1=n1/10;
        } while(n1!=0);
        cout<<"The sum of " <<n2 <<" is: " <<sum <<"\n";
}

void loopsum2()
{
	int a,num,sum=0,b;
	cout<<"Enter a four digit number: ";
		cin>>a;
		b=a;
	while (a>0)
	{
		num=a%10; sum=sum+num; a=a/10;
	}
	cout<<"The combined sum of " <<b <<" is " <<sum <<"\n";
}
