#include<iostream>
#include<algorithm>
#include<numeric>
using namespace std;
int main(){
int a1[100000],a2[100000],i,n;
while(1){
cin>>n;
if(n==0)
break;
for(i=0;i<n;i++){
cin>>a1[i];
	}

for(i=0;i<n;i++){

a2[a1[i]-1]=i+1;
	}


for(i=0;i<n;i++){
if(a1[i]!=a2[i]){
break;
}
	}

if(i==n)
cout<<"ambiguous"<<endl;
else
cout<<"not ambiguous"<<endl;

}

return 0;
}
