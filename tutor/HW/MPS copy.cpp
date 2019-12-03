#include<iostream>
#include<cstdio>
#include<string>
#include<vector>

using namespace std;
int dx[2]={0,-1};
int dy[2]={-1,0};


int main(){
    int n;
    cin>>n;
    while(n--){
        int x,y;
        cin>>x>>y;
        int dp[x+5][y+5];
        int arr[x+5][y+5];
        
        for(int i=1;i<=x;i++){
            for(int j=1;j<=y;j++){
                cin>>arr[i][j];

            }
        }
        dp[1][1]=arr[1][1];
        for(int i=2;i<=x;i++){
            dp[i][1]=dp[i-1][1]+arr[i][1];
        }
        for(int i=2;i<=y;i++){
            dp[1][i]=dp[1][i-1]+arr[1][i];
        }
        for(int i=2;i<=x;i++){
            for(int j=2;j<=y;j++){
                int mi=min(dp[i][j-1],dp[i-1][j]);
                dp[i][j]=arr[i][j]+mi;

            }
        }
        cout<<dp[x][y]<<endl;
        
    }
}