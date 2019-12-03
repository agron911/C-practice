#include<iostream>
#include<algorithm>
#include<map>
#include<vector>

using namespace std;
long long int ans;
vector<int>v;

void solve(int l, int r){
    if(l==r-1){
        return;
    }
    int m=(l+r)/2;
    solve(l,m);
    solve(m,r);
    vector<int>v1,v2;
    for(int i=l;i<m;i++){
        v1.push_back(v[i]);
    }
    for(int i=m;i<r;i++){
        v2.push_back(v[i]);
    }
    int p1=0,p2=0,cur=l,cnt=v1.size();
    while(p1<v1.size()&&p2<v2.size()){
        if(v1[p1]<=v2[p2]){
            v[cur]=v1[p1];
            cur++;p1++;
            cnt--;
        }else{
            v[cur]=v2[p2];
            cur++;p2++;
            ans+=cnt;
        }
    }
    while(p1<v1.size()){
        v[cur]=v1[p1];
        cur++;p1++;
    }
    while(p2<v2.size()){
        v[cur]=v2[p2];
        cur++;p2++;
    }


}


int main(){
    int t;

    while(cin>>t&&t){
        ans=0,v.clear();
        while(t--){
            int x;
            cin>>x;
            v.push_back(x);
        }
        solve(0,v.size());
        cout<<ans<<endl;
    }
    
}