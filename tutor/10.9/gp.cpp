#include<iostream>
#include<cstdlib>
#include<string.h>
#include<queue>
using namespace std;
int num[105][105];
int dx[8]={0,0,1,-1,1,1,-1,-1};
int dy[8]={1,-1,0,0,1,-1,1,-1};
void dfs(int x,int y){
    
    for(int i=0;i<8;i++){
        int nx=x+dx[i];
        int ny=y+dy[i];
        if(num[nx][ny]==1){
            num[nx][ny]=0;
            dfs(nx,ny);
        }

    }
}

int main(){
    cin.tie(0);
    int n,m;
    string s;

    while (cin>>n>>m &&n)
    {
        
        memset(num,0,sizeof(num));
        for(int i=1;i<=n;i++){
            cin>>s;
            s = " "+s;
            for(int j=1;j<=m;j++){
                if(s[j]=='@'){
                    num[i][j]=1;
                }
            }
        }
        int ans=0;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(num[i][j]==1){
                   num[i][j]=0;
                   queue<int>q;
                   q.push(i);
                   q.push(j);
                   ans++;
                   while(!q.empty()){
                       int x=q.front();
                       q.pop();
                       int y=q.front();
                       q.pop();
                       for(int k=0;k<8;k++){
                            int nx=x+dx[k];
                            int ny=y+dy[k];
                           if(num[nx][ny]==1){
                               num[nx][ny]=0;
                               q.push(nx);
                               q.push(ny);
                           }
                       }
                   }
                }
            }
        }
        cout<<ans<<'\n';
    }
    
}