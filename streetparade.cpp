#include<bits/stdc++.h>
using namespace std;

int arr[1010];
bool flag;

int main()
{
    int n,prev,index;
    while(1)
    {
        stack<int> s;
        cin>>n;
        if(n==0)
            break;

        for(int i=0;i<n;i++)
            cin>>arr[i];

        prev=index=0;
        flag=false;
        while(index<n)
        {
            if(arr[index]==prev+1)
            {
                prev=arr[index];
                index++;
            }
            else if(s.size() && s.top()==prev+1)
            {
                prev=s.top();
                s.pop();
            }
            else
            {
                s.push(arr[index]);
                index++;
            }
        }
        while(s.size() && s.top()==prev+1)
        {
            prev=s.top();
            s.pop();
        }
        if(!s.size())
            flag=true;

        if(flag)
            cout<<"yes\n";
        else
            cout<<"no\n";

    }
    return 0;

}
