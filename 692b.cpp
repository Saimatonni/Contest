#include <bits/stdc++.h>
using namespace std;
long long divisible(long long n)
{
  while(1)
  {
    long long n1=n;
    while(n1>0)
    {
      long long int r=n1%10;
      if(r!=0&&n%r!=0)
      {
        break;
      }
      n1/=10;
    }
    if(n1==0)
    {
      return n;
      break;
    }
  }
  n++;
}
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    long long n;
    cin>>n;
    cout<<divisible(n)<<endl;
  }
   return 0;
}
