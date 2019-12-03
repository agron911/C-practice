#include<iostream>
#include<algorithm>
#include<cmath>
#include<map>
#include<vector>

using namespace std;

int cal(int x){
    int ans=1,ct=0;
    float  r=sqrt(x);
    int ir=sqrt(x);
    for(int i=2;i<r;i++){
        if(x%i==0){
            ct=x/i;
            ans=ans+i+ct;
        }
    // for(int i=2;i<=sqrt(x);i++){
    //     if(x%i==0){
    //         if(i*i==x){
    //             ans+=i;
    //         }else{
    //             ct=x/i;
    //             ans=ans+i+ct;

    //         }
            
    //     }
    // cout<<"ct"<<ct<<"ans"<<ans<<endl;
    
    }
    if(x==ir*ir){
        ans+=r;
    }

    return ans;
}

int main(){
    int n;
    while(cin>>n&&n){
        int num;
        while(n--){
            cin>>num;
            int ans=cal(num);
            // cout<<"ans===="<<ans<<endl;
            if(ans<num){
                cout<<"deficient"<<endl;
            }else if(ans==num){
                cout<<"perfect"<<endl;
            }else{
                cout<<"abundant"<<endl;
            }
        }
        
    }
    
    
}