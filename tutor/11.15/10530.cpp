#include<iostream>
#include<algorithm>
#include<map>
using namespace std;

int main(){
    int x;
    cin.tie(0);
    while(cin>>x &&x){
        
        string s;
        cin>>s>>s;
        int l=0,r=11;
        if(s=="high"){
            r=x;
        }else if(s=="low"){
            l=x;
        }else{
            cout<<"Stan may be honest\n"; 
            continue;
        }
        while(1){
            int x1;
            string s1;

            cin>>x1;
            cin>>s1>>s1;
            if(s1=="high"){
                if(x1<r){
                    r=x1;
                } 
            }else if(s1=="low"){
                if(x1>l){
                    l=x1;
                }
            }else{
                if(l<x1 && x1<r) cout<<"Stan may be honest\n";
                else cout<<"Stan is dishonest\n";
                break;
            }
        }

    }
}