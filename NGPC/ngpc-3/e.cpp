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
    cin>>n;
    int min = n + 1; 
    int ans = 0;
    for (int i = 0; n > i; i++)
    {
        int temp;
        scanf("%i", &temp);
        if (min > temp)
        {
            ans++;
            min = temp;
        }
    }
    cout<<ans<<endl;
    return 0;

    return 0;
}