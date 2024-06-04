#include <bits/stdc++.h>

using namespace std;

int main()
{

    int a;
    cin >> a;
    int mx = INT_MIN;
    int arr[a];
    for(int i=0; i<a;i++)
    {
        cin >> arr[i];
    }
    for(int i=0; i<a;i++)
    {
        mx = max(mx, arr[i]);
    }
    cout << mx << endl;
}