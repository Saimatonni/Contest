#include<iostream>
#include <vector>
#include <cmath>
using namespace std;
#define pairll pair<long long, long long>

bool cmp(const pairll& i1, const pairll& i2) {return (i1.second > i2.second) || ((i1.second == i2.second) && i1.first < i2.first); }
int main(){
    long double n;
    cin>>n;
    long double k=0;
    while(pow(2,k)<=n){
        k++;
    }
    cout<<k-1<<endl;
    return 0;
}