#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define pairll pair<long long, long long>
bool cmp(const pairll &i1, const pairll &i2)
{
    return (i1.second > i2.second) || ((i1.second == i2.second) && i1.first < i2.first);
}
int main()
{
    long long int N,K;
    cin>>N>>K;
    vector<long long int> H(N);
    for(int i=0;i<N;i++){
        cin>>H[i];
    }
    int n=N-K;
    sort(H.begin(),H.end());
    long long int ans=0;
    for(int i=0;i<n;i++){
        ans+=H[i];
    }
    cout<<ans<<endl;
    return 0;
}