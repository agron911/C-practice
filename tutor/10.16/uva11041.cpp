#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

bool cmp(string x,string y){
    return x+y>y+x; //預設是小於
}

int main(){
    int n;
    while(cin>>n && (n!=0) ){
        string s[n];
        for(int i=0;i<n;i++){
            cin>>s[i];
        }
        sort(s,s+n,cmp);
        for(int i=0;i<n;i++){
            cout<<s[i];
        }
        cout<<endl;
    }
}