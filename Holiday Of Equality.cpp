#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i,p,sum=0;
    cin>>n;
    vector<int> a(n);
    for(i=0;i<n;i++)
        cin>>a[i];
     sort(a.begin(),a.end());
     p=a[n-1];


     for(i=0;i<n;i++)
        sum+=(p-a[i]);

        cout<<sum;


}
