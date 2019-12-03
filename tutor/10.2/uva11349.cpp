#include<iostream>
#include<cstdio>
#include<string>
using namespace std;

int main(){
    int a,n;
    string s1,s2;
    cin>>a;
    for(int p=1;p<=a;p++){
        int x,flag=0;
        long long int arr[105][105];
        cin>>s1>>s2>>n;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                cin>>arr[i][j];
                
            }
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(arr[i][j]!=arr[n+1-i][n+1-j] || arr[i][j]<0)
                    flag=1;
                
            }
        }
        if(flag==1)
            printf("Test #%d: Non-symmetric.\n", p);
        else  
            printf("Test #%d: Symmetric.\n", p);

    }
}
