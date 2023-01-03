#include <iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int n;
    cin>>n;
    if(n%2==0 || n%3==0)
    {
        cout<<"Death";
    } else
    {
        cout<<n+1;
    }
    return 0;
}
