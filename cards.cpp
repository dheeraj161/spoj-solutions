#include<iostream>
using namespace std;
int main(){
int t,i;
long long int a,n;
cin>>t;
for(i=0;i<t;i++){
cin>>n;
a=(n*(3*n+1))/2;
a=a%1000007;
cout<<a<<endl;

}
return 0;
}
