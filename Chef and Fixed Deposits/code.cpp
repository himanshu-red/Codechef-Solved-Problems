#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int n, x;
    int totalCoins;
    int fdReq;
    int currCoins;
    cin >> t;
    while (t--)
    {
        cin >> n >> x;
        vector<int> data(n);
        currCoins = 0;
        fdReq = 0;
        for (auto &i : data)
            cin >> i;
        totalCoins = accumulate(begin(data), end(data), 0);
        if (x > totalCoins)
            fdReq = -1;
        else
        {
            sort(begin(data), end(data), greater<int>());
            for (auto &i : data)
            {
                if (x > currCoins)
                {
                    currCoins += i;
                    fdReq++;
                }
                else
                    break;
            }
        }
        cout << fdReq << endl;
    }
}
