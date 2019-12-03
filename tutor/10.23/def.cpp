#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long
#define maxn 100005
#define fr(i,j,k) for(int i=j;i<k;i++)
#define f(n) fr(i,0,n)
#define f1(n) fr(i,1,n+1)
#define ms(i) memset(i,0,sizeof(i));
const int mod = 1e9+7;

int main(){
    //freopen("TEST.out","w",stdout);
	
    int t;
    cin >> t;
    int f = 0;
    while(t--){
        if(f)cout<<'\n';
		
        f=1;
        int m;
        cin >> m;
        vector<pair<int,int> >v;
        int add1,add2;
        while(cin >> add1 >> add2){
            if(add1==0&&add2==0)break;
            v.pb({add1,add2});
        }
        sort(v.begin(),v.end());
        int cur = 1;
        vector<pair<int,int> >ans;
        int it = 0;
        while(cur<=m){
            pair<int,int>add;
            add.first=0;
            add.second=-1;
            while(v[it].first<cur && it < v.size()){
                if(v[it].second>add.second){
                    add = v[it];
                }
                it++;
            }
            if(add.first==0&&add.second==-1)break;
            ans.push_back(add);
            cur = add.second+1;
        }
        if(ans.size()==0||ans.back().second<m){
            cout<<0<<'\n';
        }
        else{
            cout<<ans.size()<<'\n';
            for(int i=0;i<ans.size(); i++){
                cout<<ans[i].first<<' '<<ans[i].second<<'\n';
            }
        }
    }
}