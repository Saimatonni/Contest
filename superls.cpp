#include<stdio.h>
int main()
{
  int n,m,x,y,s[1000020];
  scanf("%d",&n);
  for(int i=0;i<n;i++)
  {
    if(i>0)
    {
      printf("\n");
    }
    scanf("%d",&m);
    for(int j=0;j<m;j++)
    {
      scanf("%d %d",&x,&y);
      s[j]=x+y;
    }
    for(int i=m-1;i>0;i--)
    {
      if(s[i]>=10)
      {
        s[i-1]+=s[i]/10;
        s[i]%=10;
      }
    }
    for(int i=0;i<m;i++)
    {
      printf("%d",s[i]);
    }
    printf("\n");
  }
  return 0;
}
/*#include <cstdio>

int main () {
  int N, M, a, b, c[1000010];
  scanf("%d", &N);

  for (int k = 0; k < N; k++) {
    if (k > 0) printf("\n");

    scanf("%d", &M);
    for (int i = 0; i < M; i++) {
      scanf("%d %d", &a, &b);
      c[i] = a + b;
    }
    for (int i = M - 1; i > 0; i--) {
      if (c[i] >= 10) {
        c[i - 1] += c[i] / 10;
        c[i] %= 10;
      }
    }
    for (int i = 0; i < M; i++) {
      printf("%d", c[i]);
    }
    printf("\n");
  }
}*/
