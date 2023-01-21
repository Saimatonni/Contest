#include<iostream>
using namespace std;
#define pairll pair<long long, long long>
int main(){
    int n,i,j;
    cin>>n;
    int arr[105];
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    int maxi=0,number;
    int l=1000;
    for(j=1000;j>=2;j--){
        int count=0;
        for(i=1;i<=n;i++){
            if(arr[i]%j==0){
               count++;
            }
        }
        if(count>maxi){
            maxi=count;
            number=j;
        }
    }
    cout<<number<<endl;
    return 0;


}