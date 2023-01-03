#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;
int main() {
   ios_base::sync_with_stdio(false), cin.tie(nullptr);
   int n,x,f,f1=0;
   cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>x;
        for (int j = 2; j < x; j++) {
            if(x%j==0)
            {
                f=sqrt(j);
                if( j== (f*f))
                {
                    f1=1;

                }
            }
        }if(f1==1)
        {
            cout<<"No"<<endl;

        } if(f1==0){
            cout<<"Yes"<<endl;
        }
        f1=0;
    }
    return 0;
}
