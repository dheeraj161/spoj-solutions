#include<iostream>
using namespace std;
int main(){
int a,b,c,n;

while(a!=0 || b!=0 || c!=0){
cin>>a>>b>>c;
	if((b-a)==(c-b) && (b-a)!=0){
	n=c+b-a;
	cout<<"AP "<<n<<endl;
	}
	else if(a!=0 && b!=0 && c!=0){
		
		n=c*(b/a);
		cout<<"GP "<<n<<endl;
		
	}

}



return 0;
}