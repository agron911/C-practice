#include<iostream>
#include<cstdio>
#include<string>
#include<vector>

using namespace std;

int main(){
    float n;
    int coin[11]={5,10,20,50,100,200,500,1000,2000,5000,10000};
    int dp[30005]={1};
        for(int i=0;i<11;i++){
            for(int j=coin[i];j<=30000;j+=5){
                dp[j]= dp[j] + dp[j-coin[i]];
                cout<<j<<"dp[j]:"<<dp[j]<<"=dp[j]+"<< dp[j-coin[i]]<<endl;
            }

        }
    while(cin>>n&&n){
        int n1=n*100;
        
        // cout<<dp[n1]<<endl;
    }
}