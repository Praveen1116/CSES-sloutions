#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n-1);
    for(long long i=0; i<n-1; i++)
    {
        cin >> arr[i];
    }

    long long totalSum = 0;

    for(int i : arr)
    {
        totalSum += i;
    }

    long long neededSum = 1LL * n * (n+1) / 2;

    cout << neededSum - totalSum << endl;
}