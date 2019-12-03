#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    int n,num[20]={};
    int cnt=1;
    while(cin>>n){
    for(int i=0;i<n;i++){
        cin>>num[i];
    }
    
    long long sum=0;
    for(int i=0;i<n;i++){
        long long int n1=1;
        
        for(int j=i;j<n;j++){
            n1 *=num[j];
            sum=max(n1,sum);
        }
    }
 
    printf("Case #%d: The maximum product is %lld.\n\n",cnt,sum);
    cnt++;
    }
}