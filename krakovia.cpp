/*#include<bits/stdc++.h>
using namespace std;
string add(string x, string y)
{
  string s;
  int l1 = x.size();
  int l2 = y.size();
  int i,k;
  for(i = 0,k = 0;i < l1 || i < l2 || k > 0;++i,k /= 10)
  {
    if(i < l1)
    {
      k +=x[i] - '0';
    }
    if(i <l2)
    {
      k += y[i] - '0';
    }
    s += (char)('0' + k % 10);
  }
  return s;
}
string div(string x, int y)
{
  int l1 = x.size(),a = 0;
  string s;
  for(int i = 0;i < l1;++i)
  {
    a = a * 10 + x[i] - '0';
    s += (char)('0' + a / y);
    a %= y;
  }
  while(s.size() > 1 && s[0] == '0')
  {
    s = s.substr(1,s.size() - 1);
  }
  return s;
}
int main()
{
  int t=1,a,b;
  while(1)
  {
    cin>>a>>b;
    if(a==0)
    {
      break;
    }
    string ans="0",s;
    for(int i=0;i<a;i++)
    {
      cin>>s;
      reverse(s.begin(),s.end());
      ans=add(ans,s);
    }
    reverse(ans.begin(),ans.end());
    cout << "Bill #" << t++ << " costs " << ans<< ": each friend should pay " << div(ans,b) << "\n\n";
  }
  return 0;
}*/
#include<bits/stdc++.h>
using namespace std;
string add(string x, string y)
{
  string s;
  int l1 = x.size();
  int l2 = y.size();
  int tot,k = 0,i;
  for(i=0; i<l1 && i <l2; i++)
  {
    tot = x[i] + y[i] - 96 + k;
    s += tot%10 + 48;
    k = tot/10;
  }
  if(l1>=l2)
  {
    for(;i<l1; i++)
    {
      tot = x[i] - 48 + k;
      s += tot%10 + 48;
      k = tot/10;
    }
  }
  else
  {
    for(;i<l2; i++)
    {
      tot = y[i] - 48 + k;
      s += tot%10 + 48;
      k = tot/10;
    }
  }
  if(k)
  {
    s += 49;
  }
  return s;
}
string divide(string x, int y)
{
    int l1 = x.size();
    int div = 0;
    string s;
    for(int i=0; i<l1; i++)
    {
      div = div*10 + x[i] - 48;
      s += div/y + 48;
      div%= y;
    }
    return s;
}
void print(string s)
{
    int i, l1 = s.size();
    int flag=0;
    for(i=0; i<l1; i++)
    {
      if(s[i]!='0')
      {
        flag=1;
        break;
      }
    }
    for(;i<l1; i++)
    {
      printf("%c",s[i]);
    }
    if(flag=0)
    {
      printf("0");
    }
}
int main()
{
    int t=0,m,n;
    while(1)
    {
      cin>>m>>n;
      if(m==0)
      {
        break;
      }
      ++t;
      string x, res, str;
      for(int i=0; i<m; i++)
      {
        cin >> str;
        reverse(str.begin(),str.end());
        x = add(x,str);
      }
      reverse(x.begin(),x.end());
      printf("Bill #%d costs ",t);
      cout << x<< ": each friend should pay ";
      res = divide(x,n);
      print(res);
      cout << endl << endl;
    }
}
/*#include<bits/stdc++.h>
using namespace std;
string add(string s, string v)
{
    int a = s.size();
    int b = v.size();
    string str;
    int i, j, t, c = 0;
    for(i=0; i<a && i <b; i++)
    {
        t = s[i] + v[i] - 96 + c;
        str += t%10 + 48;
        c = t/10;
    }
    if(a>=b)
    {
        for(i=0;i<a; i++)
        {
            t = s[i] - 48 + c;
            str += t%10 + 48;
            c = t/10;
        }
    }
    else
    {
        for(i=0;i<b; i++)
        {
            t = v[i] - 48 + c;
            str += t%10 + 48;
            c = t/10;
        }
    }
    if(c) str += 49;
    return str;
}
string divide(string str, int d)
{
    int l = str.size();
    int D = 0;
    string res;
    for(int i=0; i<l; i++)
    {
        D = D*10 + str[i] - 48;
        res += D/d + 48;
        D %= d;
    }
    return res;
}
void print(string res)
{
    int i, l = res.size();
    int flag = 0;
    for(i=0; i<l; i++)
    {
        if(res[i]!='0') {
            flag=1;
            break;
        }
    }
    for(i=0;i<l; i++)
    {
        printf("%c",res[i]);
    }
    if(flag==0) printf("0");
}
int main()
{
    int t = 0, n, f;
    while(scanf("%d%d",&n,&f))
    {
       if(n==0)
       {
         break;
       }
        ++t;
        string s, res, v;
        for(int i=0; i<n; i++)
        {
            cin >> v;
            reverse(v.begin(),v.end());
            s = add(s, v);
        }
        reverse(s.begin(),s.end());
        printf("Bill #%d costs ",t);
        cout << s << ": each friend should pay ";
        res = divide(s,f);
        print(res);
        cout << endl << endl;
    }
}*/
