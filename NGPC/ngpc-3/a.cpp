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
    int n;
    cin >> n;
    vector<int> p(n), q(n);
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> q[i];
    }
    vector<int> a(n);
    iota(a.begin(), a.end(), 1);
    int P, Q, cnt;
    P = Q = cnt = 0;
    do
    {
        if (a == p)
            P = cnt;
        if (a == q)
            Q = cnt;
        cnt++;
    } while (next_permutation(a.begin(), a.end()));
    cout << abs(P - Q) << endl;

    return 0;
}