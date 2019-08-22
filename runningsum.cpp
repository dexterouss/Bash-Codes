#include<iostream>
using namespace std;
int main(){
int i,sum=0;
loop:cout<<"enter number \n";
cin>>i;
sum=sum+i;
cout<<"sum="<<sum<<"\n";
if(i!=0){
goto loop;
}
else{
cout<<"invalid input\n";
exit(0);
}

return 0;
}


