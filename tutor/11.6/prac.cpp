#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int pre[1000005]={};
bool isPrime(int x){
    int sq=sqrt(x);
    if(x==1) return 0;
    for(int i=2;i<=sq;i++){
        if(x%i==0){
            return 0;
        }
    }
    return 1;
}
int sum(int x){
    int r=0;
    while(x>0){
        r+=x%10;
        x/=10;
        
    }
    return r;
}
int main(){
    int t;
    for(int i=1;i<=1000000;i++){
        if(isPrime(i) && isPrime(sum(i))){
            pre[i]=pre[i-1]+1;
        }else{
            pre[i]=pre[i-1];
        }
    }
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        

        cout<<pre[m]-pre[n-1]<<endl;

    }
    
}