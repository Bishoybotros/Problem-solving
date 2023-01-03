#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int n;
    char x;
    cin >> n;
    stack<char> s;
    while (n--) {
        cin >> x;
        if (s.size() and s.top() != x) s.pop();
        else s.emplace(x);
    }
    vector<char > ret;
    while (s.size()) ret.emplace_back(s.top()), s.pop();
    reverse(ret.begin(), ret.end());
    if(ret.size()>0)
    {
        cout<<"NotDeadly";
    } else{
        cout<<"Deadly";
    }

    return 0;
}
