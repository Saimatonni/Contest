#include<iostream>
#include <vector>
using namespace std;
#define pairll pair<long long, long long>

bool cmp(const pairll& i1, const pairll& i2) {return (i1.second > i2.second) || ((i1.second == i2.second) && i1.first < i2.first); }
int main(){
    int n,sum=0,fac[3005]={0};
    cin>>n;
    bool a[3005]={false};
    for(int i=2;i<=n;i++){
        if(!a[i]){
            for(int j=i+i;j<=n;j+=i){
                a[j]=true;
                fac[j]++;
            }
        }
        if(fac[i]==2){
            sum++;
        }
    }
    cout<<sum<<endl;
    
   return 0; 
}





