#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int pre[1000005];
int isPrime(int x){
    if(x==1)return 0;
    int sq=sqrt(x);
    for(int i=2;i<=sq;i++){
        if(x%i==0){
            return 0;
        }
    }
    return 1;
}
int sum(int x){
    int a=0;
    while(x>0){
        a+=x%10;
        x/=10;

    }
    // if(a>=10){
    //     return sum(a); 
    // }
    // return a>=10?sum(a):a;
    return a;
}

int main(){
    int t;
    cin>>t;
    for(int i=1;i<=1000000;i++){
        if(isPrime(i)&& isPrime(sum(i))){
            pre[i]=pre[i-1]+1;
            // cnt++;
        }
        else{
            pre[i]=pre[i-1];
        }
    }
    
    while(t--){
        int s,l;
        cin>>s>>l;
        int cnt=0;
        
       cout<<pre[l]-pre[s-1]<<endl;
        // cout<<cnt<<endl;
    }
    
}


