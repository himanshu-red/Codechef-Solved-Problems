#include <bits/stdc++.h>
using namespace std; 
int main()
{
    int t; 
    int dDsa, dToc, dDm;
    int sDsa, sToc, sDm;  
    string scorer; 
    cin >> t; 
    while (t--)
    {
        cin >> dDsa >> dToc >> dDm; 
        cin >> sDsa >> sToc >> sDm; 
        int dTotal = dDsa + dToc + dDm; 
        int sTotal = sDsa + sToc + sDm; 
        if (dTotal >  sTotal)   scorer = "Dragon"; 
        else if (dTotal < sTotal) scorer = "Sloth"; 
        else 
        {
            if (dDsa > sDsa) scorer = "Dragon"; 
            else if (dDsa < sDsa) scorer = "Sloth"; 
            else 
            {
                if (dToc > sToc) scorer = "Dragon"; 
                else if (dToc < sToc) scorer = "Sloth"; 
                else scorer = "Tie"; 
            }
        }
        cout << scorer << endl; 
    }
}
