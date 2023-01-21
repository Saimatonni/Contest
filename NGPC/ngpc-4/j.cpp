#include<iostream>
#include <vector>
using namespace std;
#define pairll pair<long long, long long>

bool cmp(const pairll& i1, const pairll& i2) {return (i1.second > i2.second) || ((i1.second == i2.second) && i1.first < i2.first); }
int main(){
    int x, y, z;
    cin >> x >> y >> z;
    if (z < abs(x - y) || z == 0)
    {
        if (x > y)
        {
            cout << "+" << endl;
        }
        else if (y > x)
        {
            cout << "-" << endl;
        }
        else
        {
            cout << "0" << endl;
        }
    }
    else
    {
        cout << "?" << endl;
    }

    return 0;
  
}



