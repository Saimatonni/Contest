#include<bits/stdc++.h>
using namespace std;
int main()
{
  long int t;
  cin>>t;
  while(t--)
  {
    long long int a,b,c;
    cin>>a>>b>>c;
    int d=a+b+c;
    if((a<3||b<2||c<2)||(d<7))
    {
      cout<<"NO"<<endl;
    }
    else
    {
      cout<<"YES"<<endl;
    }
  }
  return 0;
}
