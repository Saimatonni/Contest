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
  char s1[120],s2[120];
  long long x,y;
  int l1,l2,i,maxs=2147483647;
  char ch;
  while(scanf("%s %c %s",s1,&ch,s2))
  {
    l1=stringlen(s1);
    l2=stringlen(s2);
    printf("%s %c %s\n",s1,ch,s2);
    x=y=0;
    for(i=0;i<l1;i++)
    {
      x=x*10+s1[i]-'0';
      if(x>maxs)
      {
        printf("second number too big\n");
        break;
      }
    }
    for(i=0;i<l2;i++)
    {
			y = y*10 + s2[i] - '0';
			if(y> maxs)
      {
				printf("second number too big\n");
				break;
			}
		}
    if(ch == '+' && x+y>maxs)
    {
			printf("result too big\n");
    }
		else if(ch=='*' && x*y>maxs)
    {
			printf("result too big\n");
    }
  }
  return 0;
}
/*#include<stdio.h>
#include<string.h>
char s1[110],s2[110];
int main(){
	long long a,b;
	int l1,l2,i,max = ((1<<30)-1)*2 + 1;// max is the maximum value of the number range int
	char ch;

	while(scanf("%s %c %s",s1,&ch,s2)==3){
		l1 = strlen(s1);
		l2 = strlen(s2);

		printf("%s %c %s\n",s1,ch,s2);

		a = b = 0;
		for(i=0;i<l1;i++){
			a = a*10 + s1[i] - '0';

			if(a > max){If the first number is greater thanintMaximum range
				printf("first number too big\n");
				break;
			}
		}

		for(i=0;i<l2;i++){
			b = b*10 + s2[i] - '0';

			if(b > max){// If the second number is greater than the maximum int
				printf("second number too big\n");
				break;
			}
		}

		if(ch == '+' && a+b>max)
			printf("result too big\n");
		else if(ch=='*' && a*b>max)
			printf("result too big\n");
	}
	return 0;
}
*/
