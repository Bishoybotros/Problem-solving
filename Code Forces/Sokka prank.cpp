#include <iostream>

using namespace std;
int main() {
    ios_base::sync_with_stdio(false),cin.tie(nullptr);
    char s[5] ;

    for (int i = 0; i <5 ; i++) {
        cin >>s[i];

    }
    for (int i = 4; i >=0 ; i--) {
        cout<<s[i];

    }


    return 0;
}
