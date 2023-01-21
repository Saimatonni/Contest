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
    long long k,a,b;
    long long sum;
    while (cin >> k >> a >> b)
    {
        if (a <= 0 && b >= 0)
        {
            a = -a;
            sum = 1 + (a / k) + (b / k);
            cout << sum << endl;
            continue;
        }
        else if (a <= 0 && b <= 0)
        {
            a = -a;
            b = -b;
            swap(a, b);
        }

        sum = (b / k) - (a - 1) / k;
        cout << sum << endl;
    }
    return 0;
}
