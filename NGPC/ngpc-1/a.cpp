#include<iostream>
#include <vector>
using namespace std;
#define pairll pair<long long, long long>

bool cmp(const pairll& i1, const pairll& i2) {return (i1.second > i2.second) || ((i1.second == i2.second) && i1.first < i2.first); }
int main()
{
    int test;
    cin>>test;
    for(int i=0; i<test; i++)
    {
    vector<int>store;
    int number,count=0;
    cin>>number;
    if(number%10!=0)
    {
        store.push_back(number%10);
        }
    int ans = number%10;
    number-=ans;
    if(number%100!=0)
    {
        store.push_back(number%100);
        }
    ans=number%100;
    number-=ans;
    if(number%1000!=0)
    {
        store.push_back(number%1000);
        }
    ans=number%1000;
    number-=ans;
    if(number%10000!=0)
    {
        store.push_back(number%10000);
        }
    if(number>=10000 && number%10000==0)
    {
        store.push_back(number);
        }
    cout<<store.size()<<endl;
    for(int i=0; i<store.size(); i++)
    {
        cout<<store[i]<<" ";
    }
    }
}