#include <iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	int x,y;
	while(t--){
		cin>>x>>y;
		int b=x%10;
		int a=y%4;
		if(a==0)
			a=4;
		for(int i=1;i<a;i++)
			b=(b*x)%10;
		cout<<b<<endl;
	}

	return 0;
}