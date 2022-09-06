#include <iostream>
#include <bits/stdc++.h>
using namespace  std;
int main() {
string s1,s2,s;
    getline(cin,s1);
    getline(cin,s2);
    char space =' ';
    long long arr[1000]={0};
    for (long long i = 0; i < s1.size(); i++)
    {
      arr[s1[i]]++;
    }
    for(long long i = 0; i < s2.size(); i++)
    {
        if (!(s2[i]==space))
        {  s+=s2[i]; }

    }
    long long counter =0;
    for (long long i = 0; i < s.size(); i++)
    {
   if(arr[s[i]]>0)
   {
       arr[s[i]]--;
       counter++;

   } else
   {
       cout<<"NO";
       return  0;
   }
    }
    if(counter==s.size())
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}
