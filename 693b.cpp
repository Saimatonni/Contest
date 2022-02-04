#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  int n,a[100];
  while(t--)
  {
    int s1=0,s2=0,sum=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
      cin>>a[i];
        if(a[i]==1)
        {
        s1=s1+1;
       }
      else if(a[i]==2)
      {
        s2=s2+1;
      }
      sum+=a[i];
    }
  if(sum%2==1||(s2%2==1&&s1==0))
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
