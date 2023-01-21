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
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    int k;
    cin >> k;
    for (int i = 0; i < k - 1; i++)
        next_permutation(s.begin(), s.end());
    return cout << s, 0;
}