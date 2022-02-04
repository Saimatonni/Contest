#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t,c;
  cin>>t;
  string s;
  while(t--)
  {
    cin>>s;
    int b = s.size();
    for (int i = 0; i < s.size(); i++) {
      c=0;
        if (s[i] == '(') {
            c++;
        } else if (s[i] == ')') {
            c--;
            if (c < 0) {
                cout<<"NO"<<endl;
            }
            else
            {
              cout<<"YES"<<endl;
            }
        }

}


  }
  return 0;
}
