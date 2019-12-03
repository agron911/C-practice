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
    
    cin>>s;
    
    string a=s;
    reverse(s.begin(),s.end());
    cout<<s;
    

}