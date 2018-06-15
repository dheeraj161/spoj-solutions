#include<iostream>
#include<algorithm>
#include<stack>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		int x=0;
		
		for(int j=n-1;j>0;j--){
			if(n==1)
				break;
			if(a[j]>a[j-1]){
				sort(a+j,a+n);



				



				for(int k=j;k<n;k++){
					if(a[j-1]<a[k]){
						int t=a[k];
						a[k]=a[j-1];
						a[j-1]=t;
						break;
					}
				}

				
				x=1;
				break;
			}
		}

		if(x==0)
			cout<<-1<<endl;
		else{
			for(int i=0;i<n;i++)
				cout<<a[i];
			cout<<endl;
		}

		


	}

	return 0;
}