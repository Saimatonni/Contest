#include<iostream>
#include <vector>
using namespace std;
#define pairll pair<long long, long long>

bool cmp(const pairll& i1, const pairll& i2) {return (i1.second > i2.second) || ((i1.second == i2.second) && i1.first < i2.first); }
int main()
{
    long int n, k,x, y;
    int test;
    int i, j;
    cin>>test;
    for ( i = 0; i < test; i++)
    {
        cin>>n>>k;
        x = k;
        if (k <n)
        {
            printf("%ld\n", k); 
            continue;
        }
        else if (k>=n)
        {
            y = k;
            while (x/n>1)
            {
                x /= n;
                y += x;
            }
            while (y - y / n != k)
            {
                y += 1;
            }
            printf("%ld\n", y);
        }
    }

    return 0;
}