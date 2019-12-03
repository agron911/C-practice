#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    int n=1;
    int n1,c=1;;
    int flag=0;
    while(n!=0 ){
        if(flag==1)
            cout<<"\n";
        cin>>n;
        int num[50  ]={};
        for(int i=0;i<n;i++){
            cin>>n1;
            if(n1<0){
                num[i]=-1;
            }
            else{
                num[i]=n1;
            }
        }
        int sum=1,cnt=0;
        for(int i=0;i<n;i++){
            if(num[i]==-1){
                cnt++;
            }
            else{
                sum= sum*num[i];
            }
        }
        if(cnt==n){
            printf("Case #%d: The maximum product is 0.\n",c);
        c++;

        }
        else{
            printf("Case #%d: The maximum product is %d.\n",c,sum);
        c++;
        }
        flag=1;
    }
}