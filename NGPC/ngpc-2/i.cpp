#include<iostream>
#include <vector>
using namespace std;
#define pairll pair<long long, long long>

bool cmp(const pairll& i1, const pairll& i2) {return (i1.second > i2.second) || ((i1.second == i2.second) && i1.first < i2.first); }
int main(){
    int N,M;
    cin>>N>>M;
    vector<bool> ans(M+1,true);
    for(int i=0;i<N;i++){
        int a;
        cin>>a;
        for(int j=2;j*j<=a;j++){
            if(a%j==0){
                while(a%j==0){
                   a/=j;
                   if(!ans[j]){
                    continue;
                   }
                   for(int k=1;j*k<=M;k++){
                      ans[j*k]=false;
                   }
                }
            }
        }
        if(a!=1){
            if(!ans[a]) continue;
            for(int j=1;a*j<=M;j++){
                ans[a*j]=false;
            }
        }
    }
    int count=0;
    for(int i=1;i<=M;i++){
       if(ans[i]) count++;
    }
    cout<<count<<endl;
    for(int i=1;i<M;i++){
        if(ans[i]){
            cout<<i<<endl;
        }
    }
    return 0;
}