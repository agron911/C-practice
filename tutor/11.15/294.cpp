#include<iostream>
#include<algorithm>
#include<map>
#include<cmath>
using namespace std;
int ans,max1;
void cal(int x){
    int r=1,tmp=x;
    for(int i=2;i<=sqrt(x);i++){
        int cnt=1;
        if(x%i!=0) continue;
        else{
            while(x%i==0){
                x/=i;
                cnt++;
            }
        }
        r=r*cnt;
    }
    if(x>1){
        r=r*2;
    }

    if(r>max1){
        max1=r;
        ans=tmp;

    }
    

}
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        ans=0;max1=0;
        for(int i=x;i<=y;i++){
            cal(i);
        }
        printf("Between %d and %d, %d has a maximum of %d divisors.\n",x,y,ans,max1);
    }


    
  
}