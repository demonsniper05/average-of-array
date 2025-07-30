#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter value of n";
    cin>>n;
    vector<int> arr;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        
        cout<<"enter the values";
        cin>>arr[i];
        sum+=arr[i];
    }

    int ans=sum/n;
    cout<<ans;
}
