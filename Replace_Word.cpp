#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        string S, X;
        cin >> S >> X;

        //find_replace X in S with '#'
        size_t position = S.find(X);
        while (position != -1)
        {
            S.replace(position, X.length(), "#");
            position = S.find(X, position + 1);
        }
        cout << S << endl;
    }

    return 0;
}
