#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    int height[n];
    int max=0;
    for(int i = 0; i < n; i++){
       cin >> height[i];
        if (height[i] > max)
            max = height[i];
    }
    if(k >= max)
        cout<<"0";
    else
     cout << (max-k);
    return 0;
}
