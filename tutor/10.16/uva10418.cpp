#include<iostream>
#include<cstdio>

using namespace std;
int dx[8]={0,0,1,-1,1,-1,1,-1};
int dy[8]={1,-1,0,0,-1,1,1,-1};


int main(){
    int x,y,count=1;
    
    string s;
    int flag=0;
    while(cin>>x>>y && x /*(x!=0)*/ ){
        string arr[101]={};
        int num[101][101]={};
        if(flag==1){
            cout<<"\n";
        }
        for(int i=1;i<=x;i++){
            cin>>arr[i];
            arr[i]=" "+arr[i];
            for(int j=1;j<=y;j++){
                if(arr[i][j]=='*'){
                   for(int c=0;c<8;c++){
                       int nx=i+dx[c];
                       int ny=j+dy[c];
                       num[nx][ny]++;
                   } 
                }
            }
        }
        printf("Field #%d:\n",count);
        for(int i=1;i<=x;i++){
            for(int j=1;j<=y;j++){
                if(arr[i][j]=='*'){
                    cout<<"*";
                }
                else{
                    cout<<num[i][j];
                }
            }
            cout<<endl;
        }
        count++;flag=1;

    }
}