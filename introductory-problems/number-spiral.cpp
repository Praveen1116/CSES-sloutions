#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    while(n--)
    {
        long long y, x;
        cin >> y >> x;

        long long ans = 0;

        if(y >= x)
        {
            if(y % 2 == 0)
            {
                ans = 1LL * y * y - x + 1;
            }
            else
            {
                ans = 1LL * (y-1) * (y-1) + x;
            }
        }
        else
        {
            if(x % 2 == 1)
            {
                ans = 1LL * x * x - y + 1;
            }
            else
            {
                ans = 1LL * (x-1) * (x-1) + y;
            }
        }

        cout << ans << endl;
    }
}