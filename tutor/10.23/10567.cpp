#include<iostream>
#include<string>
#include<cstdio>
using namespace std;

int main(){
    string s1,s2;
    while(cin>>s1>>s2){
        int cnt1[26]={},cnt2[26]={};
        for(int i=0;i<s1.size();i++){
            cnt1[s1[i]-'a']++;
        }
        for(int i=0;i<s2.size();i++){
            cnt2[s2[i]-'a']++;
        }
        for(int i=0;i<26;i++){
            int m=min(cnt1[i],cnt2[i]);
            while(m--){
                cout<<char(i+'a');
            }
        }
        cout<<endl;
    }
}
// t2
int main(){
    string s1,s2;
    
}