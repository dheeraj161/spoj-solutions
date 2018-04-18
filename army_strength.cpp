#include<iostream>
#include<algorithm>
using namespace std;
int main(){
int T,NG,NM,i,j,k;
cin>>T;
for(i=0;i<T;i++){
cin>>NG;
cin>>NM;
int a1[NG],a2[NM];
for(j=0;j<NG;j++){cin>>a1[j];}
for(j=0;j<NM;j++){cin>>a2[j];}
int x1=*max_element(a1,a1+NG);
int x2=*max_element(a2,a2+NM);
if(x1>=x2)
cout<<"Godzilla"<<endl;
else
cout<<"MechaGodzilla"<<endl;
}
return 0;
}
