#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;

int main(){
    int t,num[65536]={},count[65536]={};
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>num[i];
    }
    
    for(int i=0;i<t;i++){
        int max=0;
        for(int j=i-1;j>=0;j--){
            if(num[j]<num[i]){
                if(count[j]>max){
                    max=count[j];
                }
            }
            // count[i]=max+1;
        }
        count[i]=max+1;
    }
    sort(count,count+t);
    reverse(count,count+t);
    cout<<count[0]<<endl;

}