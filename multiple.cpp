#include<bits/stdc++.h>
using namespace std;
int stringlen(char s[])
{
  int i,cout=0;
  for(i=0;s[i]!='\0';i++)
  {
    cout++;
  }
  return cout;
}
int main()
{
    char n[111];
    while (scanf("%s",n)!=EOF)
    {
        int l=stringlen(n);
        if (l==1 && n[0]=='0') return 0;
        int r=0;
        for (int i=0;i<l;i++)
        {
            r=r*10+n[i]-'0';
            r=r%17;
        }
        if (r==0) printf("1\n");
        else printf("0\n");
    }
    return 0;
}
