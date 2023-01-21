#include <iostream>
#include <vector>
using namespace std;
#define pairll pair<long long, long long>

bool cmp(const pairll &i1, const pairll &i2)
{
    return (i1.second > i2.second) || ((i1.second == i2.second) && i1.first < i2.first);
}
string reverse_string(string str)
{
    string s;
    int l = str.size();
    for (int i = 0; i < l; i++)
    {
        s += str[l - 1 - i];
    }
    return s;
}
int main()
{
    int N;
    cin>>N;
    int take = N;
    vector<pair<string, string>> st;
    while (take--)
    {
        string str, l;
        cin >> str >> l;
        st.push_back({str, l});
    }
    bool check = true;
    for (int i = 0; i < N; i++)
    {
        string str1, str2;
        str1 = st[i].first;
        str2 = st[i].second;
        for (int j = 0; j < N; j++)
        {
            if (j == i)
            {
                continue;
            }
            if (str1 == st[j].first && str2 == st[j].second)
            {
                cout << "Yes" << endl;
                check = false;
                break;
            }
        }
        if (check == false)
        {
            break;
        }
    }
    if (check)
    {
        cout << "No" << endl;
    }
    return 0;
}