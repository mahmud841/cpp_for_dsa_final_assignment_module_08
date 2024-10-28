#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S;
    getline(cin, S);

    stringstream ss(S);
    string word;
    bool found = false;
    while (ss >> word)
    {
        if (word == "Jessica") // checking
        {
            found = true;
            break; // peye gechi loop break
        }
    }
    // Print Y/N
    if (found)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
