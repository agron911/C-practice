#include<iostream>
#include<cstdlib>
#include<string>

using namespace std;

int main(){
    int a,c;
    string s;
    cin>>a;
    for(c=1;c<=a;c++){
        cin>>s;
        char p;
        string ans;
        int count=0;
        for(int i=0;i< s.size();i++){
            if(s[i]<='9' && s[i]>='0'){
                count *=10;
                count += s[i]-'0';
            }
            else{
                for(int j=0;j<count;j++){
                    ans+=p;
                }
                p=s[i];
                count=0;
            }
        }
         for(int j=0;j<count;j++){
            ans+=p;
        }
        cout<<"Case "<<c<<": "<<ans<<endl;
    }


}