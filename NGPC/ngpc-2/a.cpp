#include<iostream>
#include <vector>
using namespace std;
#define pairll pair<long long, long long>

bool cmp(const pairll& i1, const pairll& i2) {return (i1.second > i2.second) || ((i1.second == i2.second) && i1.first < i2.first); }
int main(){
    string s;
    cin>>s;
    int l=s.size();
    int y = s[l-1]-'0';
    s=s.substr(0,l-2);
    if(y<=2){
        s+='-';
    }else if(y>=7){
        s+='+';
    }
    cout<<s<<endl;
    return 0;
}