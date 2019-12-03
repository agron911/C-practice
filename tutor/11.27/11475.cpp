#include<iostream>
#include<cstdio>
#include<algorithm>
#include<string>
#include<vector>

using namespace std;

int main2(){
    string s;
    while(cin>>s){
        int n=s.size();
        for(int i=0;i<n;i++){
            string s1= s.substr(i);     
            string s2=s1;
            reverse(s2.begin(),s2.end());
            if(s1==s2){
                string s3=s.substr(0,i);
                reverse(s3.begin(),s3.end());
                cout<<s+s3<<endl;
                break;
            }
        }
    }
}


int main(){
    string s;
    while(cin>>s){
        int n=s.size();
        for(int i=0;i<n;i++){
            string s1=s.substr(i);
            cout<<s1;
            break;
            string s2=s1;
            reverse(s2.begin(),s2.end());
            if(s1==s2){
                string s3=s.substr(0,i);
                reverse(s3.begin(),s3.end());
                // cout<<s+s3<<endl;
                break;
            }
        }
    }
}