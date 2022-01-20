#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> v(3);
        for (auto &i : v)
            cin >> i;
        int index = 0;
        int max = v[0];
        for (int i = 1; i < 3; i++)
        {
            if (v[index] < v[i])
            {
                index= i; 
                max = v[i]; 
            }
        }
        if (max > 50)
        {
            switch (index)
            {
                case 0:
                    cout << "A" << endl; 
                    break; 
                case 1:
                    cout << "B" << endl; 
                    break; 
                case 2:
                    cout << "C" << endl; 
                    break;
            }
        }
        else 
            cout << "NOTA" << endl; 
    }
}
