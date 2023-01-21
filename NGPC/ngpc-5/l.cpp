#include<iostream>
#include <vector>
using namespace std;
#define pairll pair<long long, long long>
#define limit 202020
vector<vector<int>>v1(limit);
vector<bool>visited(limit, false);

void dfs_traversal(int n) {
  visited[n] = true;
  for (auto i : v1[n]) {
    if (visited[i] == false) {
      dfs_traversal(i);
    }
  }
}

bool cmp(const pairll& i1, const pairll& i2) {return (i1.second > i2.second) || ((i1.second == i2.second) && i1.first < i2.first); }
int main(){
   vector<int>road;
   int n,m;
   cin>>n>>m;
   int r1,r2;
   for(int i=0;i<m;i++){
     cin>>r1>>r2;
     v1[r1].push_back(r2);
      v1[r2].push_back(r1);
   }
   for (int i = 1; i <= n; i++) {
      if (visited[i] == false) {
        road.push_back(i);
        dfs_traversal(i);
      }
    }
    cout << road.size() - 1 << endl;
    for (int i = 0; i < road.size() - 1; i++) {
      cout << road[i] << " " << road[i + 1] << endl;
    }
   return 0;

}
