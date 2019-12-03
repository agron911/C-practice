#include <iostream>
#include <cstdio>
#include <algorithm>
#include <map>
#include <vector>
using namespace std;

int main()
{
    int n;
    string add;
    while (cin >> n && n)
    {
        map<string, int> mp;
        for (int j = 0; j < n; j++)
        {
            vector<string>v;

            for (int i = 0; i < 5; i++)
            {
                cin >> add;
                v.push_back(add);
            }
            sort(v.begin(),v.end());
            string s;
            for(int c=0;c<5;c++){
                s =s+v[c];
            }
            mp[s]++;
        }
        int mx=0;
        int cnt=0;
        for(map<string,int>::iterator i=mp.begin();i!=mp.end();i++){
            if(i->second>mx){
                mx=(i->second);
                cnt=1;
            }
            else if(i->second==mx){
                cnt++;
            }
        }
        cout<<cnt*mx<<endl;
    }
}