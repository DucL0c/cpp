#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    set<int> s;
    for(int i=0;i<n;i++){
        cin>>a[i];
        s.insert(a[i]);
    }
    for(int x:s){
        cout<<x<<" ";
    }
    // int n;
    // cin>>n;
    // int a[n];
    // int b[1000]={0};
    // for(int i=0;i<n;i++)
    // {
    //     cin>>a[i];
    //     b[a[i]]++;
    // }
    // sort(a,a+n);
    // for(int i=0;i<n;i++)
    // {
    //     if(b[a[i]]!=0) 
    //         cout<<a[i]<<" ";
    //     b[a[i]]=0;
    // }
}