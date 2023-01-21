#include<iostream>
#include <vector>
using namespace std;
#define pairll pair<long long, long long>

bool cmp(const pairll& i1, const pairll& i2) {return (i1.second > i2.second) || ((i1.second == i2.second) && i1.first < i2.first); }
int main(){
   int n,a,b;
   cin>>n;
   //bool flag;
   for(int i=0;i<n;i++){
    cin>>a;
    bool flag=false;
    for(int i=0;i<=100;i++){
        for(int j=0;j<=100;j++){
           if(i*3 + j*7==a){
            flag=true;
           }
        }
    }
   //}
    if(flag){
       cout<<"YES"<<endl;  
    }else{
       cout<<"NO"<<endl; 
    }
   }
        
    /*if(a%3==0||a%7==0){
        cout<<"YES"<<endl;
    }
    else{
        
       // cout<<"NO"<<endl;
    }*/
   
   return 0; 
}
