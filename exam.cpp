#include<stdio.h>
void my(int x)
{
  int i=0,j=1,k=2;
  for(;j<5;j++)
  {
    for(;k<5;k++)
    {
      for(;i<5;i++)
      {
        if(x%k==0)
        {
          i=3;
          j=3;
        }
      }
      printf("%d%d%d",i,j,k);
    }
  }
}
int main()
{
  int x;
  scanf("%d",&x);
  my(x);
  return 0;
}
