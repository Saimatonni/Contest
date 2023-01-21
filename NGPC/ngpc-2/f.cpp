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
    string str;
    cin >> str;
    if (str == "Hello,World!")
    {
        cout << "AC" << endl;
    }
    else
    {
        cout << "WA" << endl;
    }
    return 0;
}