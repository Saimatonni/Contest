#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t,n,a[100];
  cin>>t;
  while(t--)
  {
    cin>>n;
    for(int i=1;i<=n;i++)
    {
      cin>>a[i];
    }
    for(int i=1;i<=1;i++)
    {
      cout<<a[1]<<" ";
      }
      for(int i=1;i<=1;i++)
      {
        cout<<a[n]<<" ";
        }
      for(int i=n-1;i>n;i-=2)
      {
        cout<<a[i]<<" ";
      }
      for(int i=2;i<n;i+=2)
      {
        cout<<a[i]<<" ";
      }
      cout<<endl;
  }
  return 0;
}
