#include <iostream>
using namespace std;



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
    long long n;
    cin >> n;
    long long x;
    while (n--)
    {
        cin >> x;
        if (x < 0) x++;
        cout << x << ' ';
    }
    return  0;
}