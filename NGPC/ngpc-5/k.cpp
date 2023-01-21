#include<iostream>
#include <vector>
using namespace std;
#define pairll pair<long long, long long>
#define limit 200100
vector<vector<int>> v1(limit);
vector<int>v2(limit);
int boss(int a){
  if(v1[a].size()==0){
     return 1;
  } else{
    for(int i=0;i<v1[a].size();i++){
        v2[a]+=boss(v1[a][i]);
    }
  }
  return v2[a]+ 1;
}
bool cmp(const pairll& i1, const pairll& i2) {return (i1.second > i2.second) || ((i1.second == i2.second) && i1.first < i2.first); }
int main(){
   int n;
   cin>>n;
   //vector<vector<int>> v1(limit);
   //vector<int>v2(limit);
   for(int i=2;i<=n;i++){
    int b;
    cin>>b;
     v1[b].push_back(i);
   }
   boss(1);
   for (int i = 1; i <= n; i++) {
      cout << v2[i] << " ";
   }
   return 0; 
}

