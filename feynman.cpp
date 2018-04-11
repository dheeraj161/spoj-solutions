#include<iostream>
using namespace std;
int main(){
int n=1,num,i;
while(n!=0){
num=1;
cin>>n;
if(n!=0){
num=(n*(n+1)*(2*n+1))/6;
cout<<num<<endl;
}
}
return 0;
}
