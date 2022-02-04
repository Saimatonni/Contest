#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t,n,d,a[100],i;
  cin>>t;
  while(t--)
  {
    int f=1,t=0;
    cin>>n>>d;
    for(i=0;i<n;i++)
    {
      cin>>a[i];
      if(a[i]>d) f=0;
    }
    if(f==1)
    {
      cout<<"YES"<<endl;
    }
   else
   {
     for(int i=0;i<n;i++)
     {
       for(int j=i+1;j<n;j++)
       {
        if((a[i]+a[j])<=d)
    {
      t=1;
    }
  }
}
if(t==1)
{
  cout<<"YES"<<endl;
}
    else
    {
      cout<<"NO"<<endl;
    }
  }
}
  return 0;
}
