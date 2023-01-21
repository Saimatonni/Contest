#include<iostream>
#include <vector>
using namespace std;
#define pairll pair<long long, long long>

bool cmp(const pairll& i1, const pairll& i2) {return (i1.second > i2.second) || ((i1.second == i2.second) && i1.first < i2.first); }
int main(){
    long long N,M;
    cin>>N>>M;
    int sum=0;
    while(M--){
        int t;
        cin>>t;
        sum+=t;
    }
    if(N<sum){
        cout<<"-1"<<"\n";
    }
    else{
        cout<<N-sum<<"\n";
    }
    return 0;
}