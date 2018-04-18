#include<iostream>
using namespace std;
int main(){
int G,B,n;
while(1){
cin>>G;
cin>>B;
n=0;
if(G==-1 || B==-1)
break;
if(G<=B){
n=B/(G+1);
if(B%(G+1)!=0)
n++;
	}
else{
n=G/(B+1);
if(G%(B+1)!=0)
n++;
	}
cout<<n<<endl;
}
return 0;
}
