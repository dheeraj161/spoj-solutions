#include<iostream>
using namespace std;
int main(){
float n,n1;
int i,x;
while(1){
cin>>n;
n1=0.00;
i=1;
if(n==0.00)
break;
while(n1<n){
	i++;
	n1=n1+(1/i);
	}
cout<<i<<" cards(s)"<<endl;
}
return 0;
}
