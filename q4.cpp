#include<iostream>
using namespace std;

int main()
{
	int b, a[100], i=0;
	cout<<"Enter a Base10 Number: ";
	cin>>b;
	while(b!=0)
	{
	     a[i]=b%2; //cout<<a[i]<<"\t";;
	     b=b/2;
	     i=i+1; 
	} 
        //a[i]=0;
        //cout<<a[i];
        cout<<"\n";
	for(i>=0;i--;){
            cout<<a[i]<<"   "; 

}       cout<<"\n";
	return 0;
}
