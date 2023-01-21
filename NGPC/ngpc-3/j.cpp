#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;
#define pairll pair<long long, long long>

bool cmp(const pairll &i1, const pairll &i2)
{
    return (i1.second > i2.second) || ((i1.second == i2.second) && i1.first < i2.first);
}
int main()
{
    int n, k;
    cin >> n >> k;
    vector<long long> arr(n);
    for (auto &i : arr)
    {
            cin >>i;
    }

    long long ms = -1, summ = 0;
    for (int i = 0; i < k; i++)
    {
        summ += arr[i];
    }
    ms = summ;

    for (int i = k; i < n; i++)
    {
        summ += arr[i] - arr[i - k];
        ms = max(ms, summ);
    }
    cout << fixed << setprecision(12) << (ms + k) / 2.0 << endl;
    return 0;
}