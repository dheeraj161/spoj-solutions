#include<iostream>
using namespace std;
int main()
{
    long long int num;
    cin>>num;

    if(num<=1 || !(num&num-1))
        cout<<"TAK"<<endl;
    else
        cout<<"NIE"<<endl;

    return 0;

}
