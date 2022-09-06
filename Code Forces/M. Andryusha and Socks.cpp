#include <bits/stdc++.h>
using namespace std;
int main() {
    int size,soc;
    cin>>size;
    int arr[size+1]={0};
    if(size==1)
    {
        int s1,s2;
        cin>>s1>>s2;
        cout<<"1";
        return  0;
    }
    int table_po=0 , counter=0 ;
    for ( int i = 0 ; i < size * 2 ; i ++ )
    {
        int so;
        cin >> so;
        if (arr[so] == 0)
        {
            arr[so]++;
            table_po++;
        }
        else
        {
            counter = max(table_po, counter);
            table_po--;
        }
    }
        cout << counter << endl ;
    return 0;
}


