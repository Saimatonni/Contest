#include <iostream>
#include <vector>
using namespace std;
#define pairll pair<long long, long long>

bool cmp(const pairll &i1, const pairll &i2)
{
    return (i1.second > i2.second) || ((i1.second == i2.second) && i1.first < i2.first);
}
int main()
{
    int t;
    // cin >> t;
    string s;
    bool flag;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        flag = true;
        cin >> s;

        for (int j = 0; j < s.length(); j++)
        {
            int lim = s[s.length() - 1 - j];
            if (s[j] != lim)
            {
                flag = false;
            }
        }
        if (flag)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}


