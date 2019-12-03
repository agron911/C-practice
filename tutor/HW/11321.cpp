#include<iostream>
#include<algorithm>
#include<map>
#include<vector>

using namespace std;
long long int ans;
// vector<int>v;

struct ss{
    int x1;
    int x2;
};

int cal(int x,int m){
    int r=0;
    r=x%m;
    return r;
}
bool cmp(ss x,ss y){
    if(x.x1!=y.x1){
        return x.x1<y.x1;
    }
    else
    {
        if(x.x2%2!=y.x2%2){
            return abs(x.x2%2)> abs(y.x2%2);
        }
        else{
            if(x.x2%2==0){
                return x.x2<y.x2;
            }else{
                return x.x2>y.x2;
            }
        }
    }
    
}

int main(){
    int n,m;
    while(cin>>n>>m &&n){
        vector<ss>mp;
        int x,r;
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

            cout<<mp[i].x2<<endl;
        }
    }
    cout<<"0 0";
    
}