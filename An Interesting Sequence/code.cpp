#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int k;
        cin >> k;
        if (k % 2)
        {
            cout << 0 << endl;
        }
        else
        {
            int count = 0;
            int sum = k / 2;
            int half = k / 2;
            while (sum + half == k)
            {
                count++;
                half /= 2;
                sum += half;
            }
            cout << count << endl;
        }
    }
}
