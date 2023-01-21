#include<iostream>
#include <vector>
using namespace std;
#define pairll pair<long long, long long>

bool cmp(const pairll& i1, const pairll& i2) {return (i1.second > i2.second) || ((i1.second == i2.second) && i1.first < i2.first); }
int main(){
   int n;
    string s[110];
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int f=0;
        cin>>s[i];
        for(int j=0; j<i; j++)
        {
            if(s[i]==s[j])
            {
                f=1;
                break;
            }
        }
        if(f)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl; 
    }
    return 0;
}

   