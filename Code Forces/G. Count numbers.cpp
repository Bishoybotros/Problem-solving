#include <iostream>
#include <bits/stdc++.h>
using namespace  std;
int main() {
    int x;
    int y,in1,in2;
    cin>>x>>y;
   int freq[100001]={0};
    while(y--)
    {
        cin>>in1>>in2;

        if(in1==1)
        {
                freq[in2]=++freq[in2];

        } else{
            cout<<freq[in2]<<endl;

        }
    }
    return 0;
}
