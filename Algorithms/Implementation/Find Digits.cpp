#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, c = 0;
        cin >> n;
        int tmp = n;
        while(tmp)
        {
            int r = tmp % 10;
            if(r && n%r == 0)
                ++c;
            tmp /= 10;
        }
        cout << c << "\n";
    }
    return 0;
}
