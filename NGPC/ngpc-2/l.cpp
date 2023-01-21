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
    for (int i = 0; i < 26; i++)
    {
        int test;
        cin>>test;
        //cout<<96+test<<endl;
        printf("%c", 96 + test);
    }
    return 0;
}