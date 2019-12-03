#include<iostream>
#include<string>
#include<cstdlib>
#include<algorithm>
#include<vector>
using namespace std;

struct ss{
    int w;
    int v;
};

int main(){
    int n;
    cin>>n;
    vector<ss>s;
    vector<ss>s1;
    int dp1[1005]={};
    int w,v,k[1005]={};
    while(n--){
        cin>>w>>v;
        // dp1[w]=v;

        s.push_back({w,v});

        
    }
    int ks,max=0,dp2[1005]={},n1=0;
    cin>>ks;
    for(int i=0;i<s.size();i++){
        s1.push_back(s[i]);
        for(int j=s1.size();j>=0;j--){
            s1.push_back(s1[i]+s1[j]);

        }
    }
    
    // for(int i=0;i<1000;i++){
    //     cout<<dp2[i]<<endl;
    // }
}