#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n,c=0;
    cin>>n;
    string s;
    cin>>s;
    int i=n-1;
    while(s[i]==')'&&i>=0)
    {
      c++;
      i--;
    }
   if(c>n-c)
   {
     cout<<"Yes"<<endl;
   }
   else
   {
     cout<<"No"<<endl;
   }
  //cout<<sum<<endl;
  }
  return 0;
}
