#include<iostream>
using namespace std;
int main(){
int n=1,i,m,a;
while(n!=-1){
cin>>n;
int s=0;
if(n==-1)
break;
int arr[n];
m=0;
for(i=0;i<n;i++){
cin>>arr[i];
s=s+arr[i];
}
if(s%n!=0){
m=-1;
}
else{
a=s/n;
for(i=0;i<n;i++){
if(arr[i]>a){
m=m+arr[i]-a;
	}
}
}
cout<<m<<endl;



}
return 0;
}
