#include <iostream>
using namespace  std;
void  prf(long long arr[],int s,long long arrf[])
{
arrf[0]=arr[0];
    for (int i = 1; i <s ; i++)
    {
      arrf[i]=arrf[i-1]+arr[i];
    }
}
int main()
{
    long long m,q;
    long long n1 ,n2;
    cin>>m>>q;
    long long a[m],pref[m];
    for (int i = 0; i <m; i++)
    {
        cin>>a[i];
    }
prf(a,m,pref);
    while (q--)
    {
cin >>n1>>n2;
if(n1==1)
    cout<<pref[n2-1]<<endl;
else
{
    cout<<pref[n2-1]-pref[n1-2]<<endl;
}
    }
    return 0;
}
