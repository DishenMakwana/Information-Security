#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, i, j, k, sum = 0;
    string m;
    cout << "Enter the message" << '\n';
    cin >> m;
    string key;
    cout << "Enter the key" << '\n';
    cin >> key;
    int mod = key.size();
    j = 0;
    for (i = key.size(); i < m.size(); i++)
    {
        key += key[j % mod];
        j++;
    }
    string ans = "";
    for (i = 0; i < m.size(); i++)
    {
        ans += (m[i] - key[i] + 26) % 26 + 'A';
    }
    cout << "Decrypted message: " << ans << '\n';

    return 0;
}
