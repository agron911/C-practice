#include<iostream>
#include<cstdio>
#include<string>
#include<vector>

using namespace std;
int dx[2]={0,-1};
int dy[2]={-1,0};

int bin(int x){
    int r=0;
    while(x){   
        r+=x%2;
        x/=2;
    }
    return r;
}

int main(){
    int x,y,ans=0;
    while(cin>>x>>y&&x){
        for(int i=x;i<=y;i++){
            ans+=bin(i);
        }
        cout<<ans<<endl;
    }
    
}
//================================================
int bin1(int x){
    int r=0;
    while(x){
        r+=x%2;
        x/=2;
    }
}

int main1(){
    int x,y,ans1=0;
    while(cin>>x>>y&&x){
        for(int i=x;i<=y;i++){
            ans1+=bin1(i);
        }
        cout<<ans1<<endl;
    }
}