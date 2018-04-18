#include<iostream>
using namespace std;
char check(long long n){
	int i=1;
	int j=1;
	if(n==1)
	return 'Y';
	while(i<n){
		i=i+j*6;
		j++;
		}
	if(i==n)
	return 'Y';
	else
	return 'N';

}
int main(){
long long n;
char ch;
while(1){
cin>>n;
if(n==-1)
break;
ch=check(n);
cout<<ch<<endl;
}
return 0;
}
