#include <bits/stdc++.h >
using namespace std ;
long long arr [ 100005 ]={0} ;
int main ( )
{
    long long start,end,add;

    long long size, process;
    cin >> size >> process;
    vector<long long> v;
    for (int i = 0; i < size; i++)
    {
        long long num;
        cin >> num;
        v.push_back(num);
    }
    while(process--)
    {
        cin>>start>>end>>add;
        arr[start-1]+=add;
        arr[end]-=add;
    }
    for (int i = 0; i < size; i++) {
        arr[i]+=arr[i-1];
    }
    for (int i = 0; i < size; i++) {
        cout<<v[i]+arr[i]<<" ";
    }
    return 0;
}