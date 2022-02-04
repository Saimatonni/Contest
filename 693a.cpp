#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  int w,h,n;
  while(t--)
  {
    cin>>w>>h>>n;
    int x=1,s;
    s=w*h;
    while(s%2!=1)
    {
      s=s/2;
      x*=2;
    }
    if(x>=n)
    {
      cout<<"YES"<<endl;
    }
    else
    {
      cout<<"NO"<<endl;
    }
  }
  return 0;
}
