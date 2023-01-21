#include <iostream>
#include <vector>
using namespace std;
#define pairll pair<long long, long long>

bool cmp(const pairll &i1, const pairll &i2)
{
    return (i1.second > i2.second) || ((i1.second == i2.second) && i1.first < i2.first);
}
string reverse_string(string str)
{
    string s;
    int l = str.size();
    for (int i = 0; i < l; i++)
    {
        s += str[l - 1 - i];
    }
    return s;
}
int main()
{
    long long t;
    cin >> t;

    string str;
    while (t != 0)
    {
        if (t % 2 == 1)
        {
            t--;
            str += 'A';
        }
        else
        {
            t /= 2;
            str += 'B';
        }
    }

    string ans = reverse_string(str);
    cout << ans << endl;
    return 0;
}