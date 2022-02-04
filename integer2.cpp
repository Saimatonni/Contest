/*#include<stdio.h>
int strCmp( char str1[ ], char str2[ ] )
{
  int i=0;
  while( str1[i] == str2[i] )
  {
    if( str1[i] == '\0' || str2[i] == '\0' )
    {
      break;
    }
    i++;
  }
  if( str1[i] == '\0' &&  str2[i] == '\0' )
  {
    return 1;
  }
  else
  {
    return 0;
  }
}
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
  char s[150];
  int sum[150]={0},i,j,len;
  while(fgets(s))
  {
    if(!strCmp(s,"0"))
    {
      break;
    }
    len=stringlen(s);
    for(i=0,j=len-1;i<len;i++,j--)
    {
      sum[i]+=s[j]-'0';
    }
  }
  for(i=0;i<150;i++)
  {
    if(sum[i]>=10)
    {
      sum[i+1]+=sum[i]/10;
      sum[i]%=10;
    }
  }
  int l=150;
  while(sum[l]==0&&l>=0)
  {
    l--;
  }
  if(l==-1)
  {
    printf("0");
  }
  for(i=150;i>=0;i--)
  {
    printf("%d",sum[i]);
  }
  printf("\n");
}*/


#include<stdio.h>
#include<string.h>
int main() {
 char s[201];
 int Sum[201] = {0}, i, j, length;
 while(fgets(s)) {
  if(!strcmp(s, "0")) break;
  length = strlen(s);
  for(i = 0, j = length-1; i < length; i++, j--)
   Sum[i] += s[j] - '0';
 }
 for(i = 0; i < 200; i++)
  if(Sum[i] >= 10) {
   Sum[i+1] += Sum[i]/10;
   Sum[i] %= 10;
  }
 i = 200;
 while(Sum[i] == 0 && i >= 0) i--;
 if(i == -1) printf("0");
 for(; i >= 0; i--) {
  printf("%d", Sum[i]);
 }
 puts("");
    return 0;
}
