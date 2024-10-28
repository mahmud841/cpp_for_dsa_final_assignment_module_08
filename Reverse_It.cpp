#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    string name[100];
    int cls[100];
    char s[100];
    int id[100];

    // student data
    for (int i = 0; i < N; i++)
    {
        cin >> name[i] >> cls[i] >> s[i] >> id[i];
    }

    // Reverse the sections
    for (int i = 0; i < N / 2; i++)
    {
        swap(s[i], s[N - i - 1]);
    }

    for (int i = 0; i < N; i++)
    {
        cout << name[i] << " " << cls[i] << " " << s[i] << " " << id[i] << endl;
    }

    return 0;
}
