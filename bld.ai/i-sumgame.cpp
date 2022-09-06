#include <iostream>
#include <bits/stdc++.h>

using namespace std;



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
   long long a, b;
    cin >> a >> b;
    if (a > b)swap(a, b);
    long long s = (a + b) * (b - a + 1) / 2;
    cout << ((s & 1) ? "Hoss" : "Nasser");
    return 0;
}