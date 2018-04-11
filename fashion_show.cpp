#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m=0;
		cin>>n;
		int arr1[n],arr2[n];
		for(int i=0;i<n;i++)
			cin>>arr1[i];
		for(int i=0;i<n;i++)
			cin>>arr2[i];
		sort(arr1,arr1+n);
		sort(arr2,arr2+n);
		for(int i=0;i<n;i++){
			m=m+arr1[i]*arr2[i];
		}
		cout<<m<<endl;
	}

	return 0;
}