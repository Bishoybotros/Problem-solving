#include <iostream>
using namespace std;
int main() {
ios_base::sync_with_stdio(false),cin.tie(nullptr);
int x = 2;
int y=3;
int n,a,b;
cin>>n>>a>>b;
x*=n;
y*=n;
if(x==a&&y==b||x<a && y<b)
{
    cout<<"Yes";
} else{
    cout<<"No";
}
    return 0;
}
