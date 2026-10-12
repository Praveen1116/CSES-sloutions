#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int count = 0;
    int maxLen = 1;
    int n = s.length();

    for(int i=1; i<n; i++)
    {
        if(s[i] == s[i-1])
        {
            count++;
        }
        else
        {
            count = 0;
        }

        maxLen = max(maxLen, count+1);
    }

    cout << maxLen << endl;
    return 0;
}