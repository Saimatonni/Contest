#include <iostream>
#include <vector>
using namespace std;
#define pairll pair<long long, long long>
int cnt[100005];
bool pass[100005];

bool cmp(const pairll &i1, const pairll &i2)
{
    return (i1.second > i2.second) || ((i1.second == i2.second) && i1.first < i2.first);
}
int main()
{
    int n, m, x;
    int ans1 = 0, ans2 = 0;
    string s;
    cin >> n >> m;
    for (int i = 1; i <= m; i++)
    {
        cin >> x >> s;
        if (!pass[x])
        {
            if (s == "AC")
                ans1++, ans2 += cnt[x], pass[x] = 1;
            else
                cnt[x]++;
        }
    }
    cout << ans1 << " " << ans2;
    return 0;
}