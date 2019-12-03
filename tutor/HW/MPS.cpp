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
        
        int num[x+2][y+2],cmp[x+2][y+2]={},cmp2[x+2][y+2]={};
        for(int i=1;i<=x;i++){
            for(int j=1;j<=y;j++){
                num[i][j]=-1;
            }
        }
        for(int i=1;i<=x;i++){
            for(int j=1;j<=y;j++){
                cin>>num[x][y];
            }
        }
        int max=0,s1=0;
        vector<int>v;
        for(int i=1;i<=x;i++){
            for(int j=1;j<=y;j++){
                //num[i][j]
                for(int c=0;c<2;c++){
                    int nx=i+dx[c];
                    int ny=j+dy[c];
                    if(num[nx][ny]==-1){
                        cmp[nx][ny]=num[nx][ny];
                        break;
                    }
                    else{   //
                        if(num[nx][ny]<cmp[i][j]){
                        }
                    }
                }
                if(cmp[0]>cmp[1]){
                    
                }


            }
                
        }
    }
}