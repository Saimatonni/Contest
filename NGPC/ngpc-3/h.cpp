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
    long long h;
    cin >> h;
    long long ans = 0, cnt = 1;
    while (h > 0)
    {
        ans += cnt;
        h /= 2;
        cnt *= 2;
    }
    cout << ans << endl;
}