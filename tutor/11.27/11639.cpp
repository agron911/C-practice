    #include<iostream>
    #include<cstdio>
    #include<algorithm>
    #include<string>
    #include<vector>

    using namespace std;

    int main(){
        int t,f=1;
        while(cin>>t&&t){
            
            while(t--){
                int x1,x2,y1,y2;
                int n1,n2,m1,m2;
                cin>>x1>>y1>>x2>>y2;
                cin>>n1>>m1>>n2>>m2;
                int l=max(x1,n1),r=min(x2,n2),u=min(y2,m2),d=max(y1,m1);
                int cs2=0;
                if(l<r&&d<u){
                    cs2=(u-d)*(r-l);
                }
                int cs1=0;
                cs1+=(x2-x1)*(y2-y1)+(n2-n1)*(m2-m1);
                cs1-=2*cs2;
                int nc=10000-cs1-cs2;

                cout<<"Night "<<f<<": "<<cs2<<" "<<cs1<<" "<<nc<<endl;
            f++;

            }
        }    
    }