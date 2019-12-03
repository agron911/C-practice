#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
struct ss{
    int c1;
    int c2;
};
bool cmp(ss x,ss y){
    if(x.c2!=y.c2){
        return x.c2<y.c2;
    }
    else{
        return x.c1>y.c1;
    }
}
int main(){
    string s;
    
    while(getline(cin,s)){  //中間會有空白
        int cnt[130]={};

        for(int i=0;i<s.size();i++){
            int s1=s[i];
            cnt[s1]++;
        }
        vector<ss>s1;
        for(int i=0;i<130;i++){
            if(cnt[i]!=0){
                s1.push_back({i,cnt[i]});
            }
        }
        sort(s1.begin(),s1.end(),cmp);
        for(int i=0;i<s1.size();i++){
            cout<<s1[i].c1<<" "<<s1[i].c2<<endl;
        }
        cout<<endl;
    }
    

}