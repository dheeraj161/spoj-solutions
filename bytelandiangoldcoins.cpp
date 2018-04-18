#include<iostream>
using namespace std;
int coin(int n){
int x;
if(n>6){
x=coin(n/2)+coin(n/3)+coin(n/4);
if(x>n)
return x;
}
return n;
}
int main(){
int i;
int n,r;
while(1){
cin>>n;
if(n==0)
break;
else{
r=coin(n);
cout<<r<<endl;
}
}


return 0;
}
