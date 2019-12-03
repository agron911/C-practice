#include<iostream>
#include<algorithm>
#include<map>
using namespace std;
int cal(int x){
    int r=x;
    while(x>0){
        r+=x%10;
        x/=10;
    }
    return r;
}
int main(){
    map<int,int> m;
    int t;
    for(int i=0;i<=100000;i++){
        int x=cal(i);
        if(m.count(x)) continue;
        else {
            m[x]=i;
        }
    }
    cin>>t;
    while(t--){
        int q;
        cin>>q;
        if(m.count(q))cout<<m[q]<<endl;
        else cout<<0<<endl;
    }
}