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
    long long test;
    cin >> test;
    for (long long i = 1; i <= test; i++)
    {
        long long n, k;
        cin >> n >> k;
        if (n < k)
        {
            cout << "NO" << endl;
        }
        else if (k == 1)
        {
            cout << "YES" << endl;
            cout << n << endl;
        }
        else if (n % 2 == 0)
        {
            if (k % 2 == 0)
            {
                cout << "YES" << endl;
                for (long long i = 0; i < k - 1; i++)
                {
                    cout << 1 << " ";
                }
                k--;
                cout << n - k << endl;
            }
            else
            {
                if (n / 2 >= k)
                {
                    long long b = n - (k - 1) * 2;
                    if (b % 2)
                    {
                        cout << "NO" << endl;
                    }
                    else
                    {
                        cout << "YES" << endl;
                        for (long long i = 0; i < k - 1; i++)
                            cout << 2 << " ";
                        printf("%lld\n", b);
                    }
                }
                else
                {
                    long long b = n - (k - 2);
                    if (b % 2)
                        cout << "NO" << endl;
                    else
                    {
                        cout << "YES" << endl;
                        for (long long i = 0; i < k - 2; i++)
                            cout << 1 << " ";
                        cout << b / 2 << " " << b / 2 << endl;
                    }
                }
            }
        }
        else
        {
            if (k == 2)
                cout << "NO" << endl;
            else
            {
                if (k % 2)
                {
                    cout << "YES" << endl;
                    for (long long i = 0; i < k - 1; i++)
                        cout << 1 << " ";
                    k--;
                    cout << n - k << endl;
                }
                else
                {
                    long long baki = n - (k - 2);
                    if (baki % 2)
                        cout << "NO" << endl;
                    else
                    {
                        cout << "YES" << endl;
                        for (long long i = 0; i < k - 2; i++)
                            cout << 1 << " ";
                        cout << baki / 2 << " " << baki / 2 << endl;
                    }
                }
            }
        }
    }
    return 0;
}