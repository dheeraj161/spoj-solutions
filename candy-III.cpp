#include<iostream>
using namespace std;
int main(){
int s,N,T,i,j;
long x;
cin>>T;
for(i=0;i<T;i++){
cout<<endl;
s=0;
cin>>N;
for(j=0;j<N;j++){
	cin>>x;
	s=s+x%N;
	s=s%N;
	}
if(s%N)
cout<<"NO"<<endl;
else
cout<<"YES"<<endl;
}

return 0;
}