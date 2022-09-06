#include <iostream>

using  namespace  std;
#include <bits/stdc++.h>
int lenOfLongSubarr(int arr[],int n,int k)
{


    unordered_map<int, int> um;
    int sum = 0, maxLen = 0;


    for (int i = 0; i < n; i++)
    {


        sum += arr[i];


        if (sum == k)
            maxLen = i + 1;


        if (um.find(sum) == um.end())
            um[sum] = i;


        if (um.find(sum - k) != um.end()) {


            if (maxLen < (i - um[sum - k]))
                maxLen = i - um[sum - k];
        }
    }


    return maxLen;
}

int main()
{ int y ;
    cin>>y;
    int k ;
    cin>>k;
    int arr[y] ;
    for (int i = 0; i < y; i++) {
        cin>>arr[i];
    }
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << lenOfLongSubarr(arr, n, k);
    return 0;
}

