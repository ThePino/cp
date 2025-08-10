#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &i : a)
    {
        cin >> i;
    }
    cout << n << " ";
    for (int i : a)
    {
        cout << i << " ";
    }
    cout << '\n';
    return 0;
}