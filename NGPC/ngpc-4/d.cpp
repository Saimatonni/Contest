#include<iostream>
#include <vector>
using namespace std;
#define pairll pair<long long, long long>
#define limit 1000000
long long a[limit+10];
void prediction(){
    
    for(int i=2; i<=limit; i++)
    {
       for(int j = 2*i; j<= limit; j+=i)
       {
           a[j] += i;
       }
    
       a[i] += 1;
    }
    for(int i = 2; i<=limit; i++)
        a[i] += a[i-1];
}

bool cmp(const pairll& i1, const pairll& i2) {return (i1.second > i2.second) || ((i1.second == i2.second) && i1.first < i2.first); }
int main(){

   prediction();
    int t;

    cin>>t;
    for(int i=1; i<=t; i++)
    {
        int d;
        cin>>d;
        printf("%lld\n",a[d]);
    }
    return 0;  
}