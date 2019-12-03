#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main()
{
    int n, m, c[1000] = {};
    while (cin >> n >> m && n)
    {
        for (int i = 2; i <= n; i++)
        {
            if (c[i] == 1)
                continue;
            for (int j = i * 2; j <= n; j = j + i)
            {
                c[j] = 1;
            }
        }
        vector<int> v;
        for (int i = 1; i <= n; i++)
        {
            if (c[i] == 0)
            {
                v.push_back(i);
            }
        }
        /*
            for(int i=0;i<v.size();i++){
                cout<<v[i]; 
            }
        */
        if (v.size() % 2 != 0)
        { //奇數
            if ((2 * m - 1) >= v.size())
            {
                printf("%d %d:", n, m);
                for (int i = 0; i < v.size(); i++)
                {
                    cout << " " << v[i];
                }
                cout << endl;
            }
            else
            {
                int mid = v.size() / 2;
                int left = mid - m + 1;
                int right = mid + m - 1;
                printf("%d %d:", n, m);
                for (int i = left; i <= right; i++)
                {
                    cout << " " << v[i];
                }
                cout << endl;
            }
        }
        else
        {
            if ((2 * m) >= v.size())
            {
                printf("%d %d:", n, m);
                for (int i = 0; i < v.size(); i++)
                {
                    cout << " " << v[i];
                }
                cout << endl;
            }
            else
            {
                int mid = v.size() / 2;
                int left = mid - m;
                int right = mid + m - 1;
                printf("%d %d:", n, m);
                for (int i = left; i <= right; i++)
                {
                    cout << " " << v[i];
                }
                cout << endl;
            }
        }
    }
}