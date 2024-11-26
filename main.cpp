#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long arr[55];
    arr[1] = 0 ;
    arr[2] = 1 ;
    int n ;
    cin >> n ;
    for(int i = 3 ; i<=n ; i++)
    {
        arr[i] = arr[i-1] + arr[i-2] ;
    }
    cout << arr[n] ;

    return 0;
}
