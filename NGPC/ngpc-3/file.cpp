#include<iostream>
#include <vector>
using namespace std;
#define pairll pair<long long, long long>

bool cmp(const pairll& i1, const pairll& i2) {return (i1.second > i2.second) || ((i1.second == i2.second) && i1.first < i2.first); }
int main(){
    
   return 0; 
}

//CSES subordinate problem solution



  /*
  //

#include <bits/stdc++.h>
using namespace std;

#define MAXN 202020

int n, m;
vector<vector<int>>adj(MAXN);
vector<bool>visited(MAXN, false);
vector<int>bridges;

void DFS (int node) {
  visited[node] = true;
  for (auto child : adj[node]) {
    if (visited[child] == false) {
      DFS(child);
    }
  }
}

int main() {
    cin >> n >> m;
    for (int i = 0 ; i < m; i++) {
      int node1, node2;
      cin >> node1 >> node2;
      adj[node1].push_back(node2);
      adj[node2].push_back(node1);
    }
    for (int i = 1; i <= n; i++) {
      if (visited[i] == false) {
        bridges.push_back(i);
        DFS(i);
      }
    }
    cout << bridges.size() - 1 << endl;
    for (int i = 0; i < bridges.size() - 1; i++) {
      cout << bridges[i] << " " << bridges[i + 1] << endl;
    }*/

/**************************/

