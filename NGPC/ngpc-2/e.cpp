#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define pairll pair<long long, long long>

bool cmp(const pairll &i1, const pairll &i2)
{
    return (i1.second > i2.second) || ((i1.second == i2.second) && i1.first < i2.first);
}
long long ap(long long a, long long d, long long n)
{
    return (n * (2 * a + (n - 1) * d)) / 2;
}
int main()
{
    int n, k;
    long long ans = 0;
    vector<long long> v;
    cin >> n >> k;
    v.resize(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    std::sort(v.begin(), v.end(), greater<long long>());
    v.push_back(0);
    for (int i = 0; i < n; i++)
    {
        long long fig = min(k, i + 1);
        if (k <= i + 1)
        {
            ans += k * v[i];
            break;
        }
        else
        {
            if (k < (v[i] - v[i + 1]) * fig)
            {
                ans += ap(v[i], -1, k / fig) * fig;
                ans += (v[i] - k / fig) * (k % fig);
                break;
            }
            else
            {
                ans += ap(v[i], -1, v[i] - v[i + 1]) * fig;
                k -= (v[i] - v[i + 1]) * fig;
            }
        }
    }
    cout << ans << endl;

    return 0;
}