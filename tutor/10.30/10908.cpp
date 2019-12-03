#include<iostream>
#include<string>
using namespace std;

int main(){
    int a,n,m,q;
    cin>>a;
    while(a--){
        string s[105];
        cin>>n>>m>>q;
        for(int i=0;i<n;i++){
            cin>>s[i];
        }
        int x,y;
        while(q--){
            cin>>x>>y;
            int l=y,r=y,t=x,d=x;
            for(int c=1;;c++){
                int f=0;
                l--;r++;t--;d++;
                if(l<0||r>=m||t<0||d>=n){
                    f=1;
                }
                else{
                    for(int i=t;i<=d;i++){
                        for(int j=l;j<=r;j++){
                            if(s[i][j]!=s[x][y]){
                                f=1;
                            }
                        }
                    }
                }
                if(f==1){
                    cout<<2*c-1<<endl;
                    break;
                }
            }
        }
    }
    
    
}