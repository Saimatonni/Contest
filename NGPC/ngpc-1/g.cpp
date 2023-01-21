#include <iostream>
using namespace std;
#define INF 0x3f3f3f3f
#define pairll pair<long long, long long>

bool cmp(const pairll& i1, const pairll& i2) {return (i1.second > i2.second) || ((i1.second == i2.second) && i1.first < i2.first); }
int main()
{
    int a, b, w;
    cin >> a >> b >> w;
    int maxi = 0, mini = INF;
    for (int i = 1; i <= 1000000; i++)
    {
        if (a * i <= w * 1000 && b * i >= w * 1000)
        {
            mini = min(mini, i);
            maxi = max(maxi, i);
        }
    }
    if (maxi == 0 || mini == INF)
    {
        cout << "UNSATISFIABLE" << endl;
    }
    else
        cout << mini << " " << maxi << endl;
    return 0;
}