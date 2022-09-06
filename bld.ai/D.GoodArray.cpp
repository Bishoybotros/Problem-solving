#include <iostream>
#include <bits/stdc++.h>

using namespace std;

   int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    long long n, x;
    cin >> n;
    stack<long long> s;
    while (n--) {
        cin >> x;
        if (s.size() and s.top() == x) s.pop();
        else s.emplace(x);
    }
    vector<long long > ret;
    while (s.size()) ret.emplace_back(s.top()), s.pop();
    reverse(ret.begin(), ret.end());
    cout << ret.size() << '\n';
    for (long long &i: ret)cout << i << ' ';
    return 0;
}
