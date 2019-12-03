#include<iostream>
#include<string>
#include<cstdio>
#include<algorithm>
#include<vector>

using namespace std;
int dx[8]={0,0,1,-1,1,1,-1,-1};
int dy[8]={1,-1,0,0,1,-1,1,-1};
int num[25][25];

struct ss
{
    char c;
    int num;
};
bool cmp1(ss x,ss y){
    if(x.num!=y.num){
        return x.num>y.num;
    }
    else {
        return x.c<y.c;
    }
}


void dfs(int x,int y,int cmp){
    for(int i=0;i<4;i++){
        // if(num[x][y]!=0){
            int nx=x+dx[i];
            int ny=y+dy[i];
            if(nx>20||nx<0||ny>20||ny<0) continue;
            if(num[nx][ny]==cmp){
                num[nx][ny]=-1;
                dfs(nx,ny,cmp);
            }
        // }
    }
    
}

int main(){
    int t,c;
    string s;

    cin>>t;
    for(int c=1;c<=t;c++){
        int n,m;
        num[25][25]={};
        cin>>n>>m;
        for(int i=1;i<=n;i++){
            cin>>s;
            s= " "+s;
            for(int j=1;j<=m;j++){
                num[i][j]=s[j]-'a';
            }
        }
          
        int cnt[26]={};
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
               
                if(num[i][j]!=-1){
                    int cmp=num[i][j];
                    num[i][j]=0;
                    dfs(i,j,cmp);
                    cnt[cmp]++;

                }
            }
        }
        char cc;
        vector<ss>ns;
        printf("World #%d\n",c);
        for(int i=0;i<26;i++){
            
            if(cnt[i]==0) continue;
            else {
                cc='a'+i;
                ss s1;
                s1.num=cnt[i];
                s1.c=cc;
                ns.push_back(s1);

            }
        }
        sort(ns.begin(),ns.end(),cmp1);
        // sort(ns.rbegin(),ns.rend(),cmp1); 大->小
        for(int i=0;i<ns.size();i++){
            ss s2;
            s2=ns[i];
            printf("%c: %d\n",ns[i].c,ns[i].num);
            printf("%c: %d\n",s2.c,s2.num);
        }
    }

}