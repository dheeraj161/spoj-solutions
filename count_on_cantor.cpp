#include<iostream>
using namespace std;
int main(){
int t,n1,n2,n,i,j,x,k;
cin>>t;
for(k=0;k<t;k++){
cin>>n;
n1=1;
n2=1;
x=0;
i=1;
while(1){
	x=x+i;
	if(x>=n)
	break;
i++;
	}
if(x==n)
{}
else{
x=x-i;
i--;}

if(i%2==0){
	n1=i;
if(x==n)
{}
else{
n1++;
x++;
}
if(n==x){}
else{
	while(x<n){
		n1--;
		n2++;
		x++;
		}
	}
}
else{
	n2=i;
if(x==n)
{ }
else{
n2++;
x++;
}
if(n==x){}
else{
	while(x<n){
		n2--;
		n1++;
		x++;
		}
	}
}
cout<<"TERM "<<n<<" IS "<<n1<<"/"<<n2<<endl;
}

return 0;
}
