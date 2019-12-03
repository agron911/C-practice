#include <iostream>

using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        int count=n, m=n, a;

        while(m>=3)
        {
            count += m/3;
            m=m/3 + m%3;
        }
        if (m == 2)
        {
            count++;
        }
        cout << count << endl;
    }
}