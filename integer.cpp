#include<bits/stdc++.h>
using namespace std;
#define n 150
//static char s[n][n];
//static char sum[n];
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
  char s[n][n];
  char sum[n];
  int i=0,len=0;
  while(cin>>s[i])
  {
    if(s[i][0]=='0' && !s[i][1])
    {
      break;
    }
    int slen=stringlen(s[i]);
    if(slen>len)
    {
      len=slen;
    }
    ++i;
  }
  int r=i;
  for(int j=0;j<i;j++)
  {
    int tem=stringlen(s[j]);
    if(tem!=len)
    {
      int p=len-tem;
      for(int k=tem-1;k>=0;--k)
      {
        s[j][k+p]=s[j][k];
      }
      for(int k=0;k<p;k++)
      {
        s[j][k]='0';
      }
    }
  }
  int carry=0,l=0;
  for(int j=len-1;j>=0;--j)
  {
    int sumo=0;
    for(int i=0;i<r;i++)
    {
      sumo+=s[i][j]-'0';
    }
    sumo+=carry;
    sum[l++]=sumo%10+'0';
    carry=sumo/10;
  }
  if(carry)
  {
    printf("%d",carry);
  }
  for(int i=l-1;i>=0;--i)
  {
    if(sum[i]>='0'&&sum[i]<='9')
    {
      printf("%c",sum[i]);
    }
  }
  printf("\n");
  return 0;
}
/*#include<stdio.h>
#include<string.h>

#define N 201


static char s[N][N];
static char output[N];



int main(){

    int i = 0;

    int maxlen = 0;


    // Finish taking all the inputs.
    while( fgets(s[i]) ){

        // Exit for input of 0.
        if( s[i][0] == '0' && ! s[i][1] )
            break;

        int len = strlen( s[i] );

        // Get the max length to create padding.
        if( len > maxlen )
            maxlen = len;

        ++i;
    }

    // Save rows
    int rows = i;


    // Create padding for each of the strings.
    for(int j = 0; j < i; ++j){

        int temp = strlen( s[j] );

        if( temp != maxlen ){

            // Shift by this many spaces to create 0's in front.
            int padding = maxlen - temp;

            // shift by padding columns.
            for(int k = temp - 1; k >= 0; --k)
                s[j][k + padding] = s[j][k];

            // Add 0's as paddings.
            for(int k = 0; k < padding; ++k)
                s[j][k] = '0';
        }
    }


    int carry = 0, z = 0;

    for(int j = maxlen - 1; j >= 0; --j){

        int sum = 0;

        // Add values column wise.
        for(int i = 0; i < rows; ++i)
            sum += s[i][j] - '0';

        // Add if any previous  carry
        sum = sum + carry;

        // Add value to output
        output[z++] = sum % 10 + '0';

        // get the carry for adding to next column
        carry = sum / 10;

    }

    // Print if any carry first
    if(carry)
        printf("%d", carry);


    // Then print what ever character is left
    for(int i = z - 1; i >= 0; --i){
        if(output[i] >= '0' && output[i] <= '9')
            printf("%c", output[i]);
    }
    printf("\n");

    return 0;
}*/
