#include<iostream>
#include <vector>
using namespace std;
#define pairll pair<long long, long long>

bool cmp(const pairll& i1, const pairll& i2) {return (i1.second > i2.second) || ((i1.second == i2.second) && i1.first < i2.first); }
int divisor_found(int a){
    int sum=0;
    for(int i=1;i*i<=a;i++){
       if(a%i==0){
        sum+=i+a/i;
        if(i*i==a){
            sum-=i;
        }
       }
    }
    return sum;
}

int main(){
    int t,x,y;
    cin>>t;
    for(int i=0;i<t;i++){
       cin>>x>>y;
       if((divisor_found(x)==x+y)&&(divisor_found(y)==x+y)){
        cout<<"Friendship is ideal"<<endl;
       }
       else{
        cout<<"Friendship is not ideal"<<endl;
       }
    }
    
   return 0; 
}
