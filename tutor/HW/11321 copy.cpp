#include<iostream>
#include<cstdlib>
#include<algorithm>
#include<map>
#include<vector>

#define F first
#define S second


using namespace std;
long long int ans;
// vector<int>v;

struct ss{
    int x1;
    int x2;
};
struct ss1{
    char index;
    int value;
};

int cal(int x,int m){
    int r=0;
    r=x%m;
    return r;
}
bool cmp(pair<int,int> x,pair<int,int> y){
    if(x.F!=y.F){
        return x.F<y.F;
    }
    else
    {
        if(x.S%2!=y.S%2){
            return abs(x.S%2)> abs(y.S%2);
        }
        else{
            if(x.S%2==0){
                return x.S<y.S;
            }else{
                return x.S>y.S;
            }
        }
    }
    
}

int main(){
    int n,m;
    vector<ss1>v1;

    while(cin>>n>>m &&n){
        vector<pair<int,int>>mp;
        vector<int>v{1,2};  //初始直
        int arr[1000]={1,2,4};
        int x,r;
        for(int i=0;i<2;i++){
            cout<<v[i];
        }
        for(int i=0;i<n;i++){
            cin>>x;
            r=cal(x,m);
            
            // char buff[10000];
            // sprintf(buff,"%d",x);
            // mp.push_back({r,buff});

            mp.push_back({r,x});
            
        }
        
         sort(mp.begin(),mp.end(),cmp);     // x是int 無法編譯成功， 

        // for(int i=0;i<n;i++){
        //     for(int j=i;j<n;j++){
        //         int temp;
        //         if(mp[i].x1>=mp[j].x1){
        //             temp=mp[i].x1;
        //             mp[i].x1 =mp[j].x1;
        //             mp[j].x1 =temp;
                    
        //             temp=mp[i].x2;
        //             mp[i].x2 =mp[j].x2;
        //             mp[j].x2 =temp;
        //         }
        //     }
        // }

        cout<<n<<" "<<m<<endl;

        for(int i=0;i<n;i++){

            cout<<mp[i].S<<endl;
        }
    }
    cout<<"0 0";
    
}