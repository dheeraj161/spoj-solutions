#include<iostream>
#include<algorithm>
using namespace std;
int main(){
int t,i,j,n,n1,x;
int a[10000];
cin>>t;
for(i=0;i<t;i++){
cin>>n;
cin>>x;
n1=0;
for(j=0;j<x;j++){
	cin>>a[j];
	}
sort(a,a+x);
cout<<"Scenario #"<<i+1<<":"<<endl;
for(j=0;j<x;j++){
	n1=n1+a[x-j-1];
	if(n1>=n){
		cout<<j+1<<endl;
		break;
		}
	}
if(n>n1)
cout<<"impossible"<<endl;
cout<<endl;
}
return 0;
}
