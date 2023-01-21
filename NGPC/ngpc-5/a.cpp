#include<iostream>
#include <vector>
using namespace std;
#define pairll pair<long long, long long>

bool cmp(const pairll& i1, const pairll& i2) {return (i1.second > i2.second) || ((i1.second == i2.second) && i1.first < i2.first); }
int main(){
   int n;
   cin>>n;
   for(int i=0;i<n;i++){
         
   }
   return 0; 
}
/*
{
    //freopen("in.txt", "r", stdin);

    int i, j, k;
    int n,m;
    int x,y;

    cin>>n;

    ll cnt=0;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            x=i^j;

            if(x<=n && x>0)
            {
                k=0;
                if(i+j<=x)
                    k++;
                else if(i+x<=j)
                    k++;
                else if(x+j<=i)
                    k++;

                if(k<=0)
                    cnt++;
            }
        }
    }

    cout<<cnt/6;

    return 0;*/