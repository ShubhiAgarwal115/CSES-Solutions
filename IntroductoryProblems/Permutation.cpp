#include<bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define all(a) a.begin(),a.end()
#define rep(i,a,b) for(int i=a;i<=b;i++)
using namespace std;

int main() {
    int n; cin >> n;
    if (n == 1)
        cout << 1;
    else if (n == 2 || n == 3) {
        cout << "NO SOLUTION";
    }
    else if (n == 4) {
        cout << "2 4 1 3";
    }
    else if (n >= 5) {
        for (int i = 1; i <= n; i += 2)
            cout << i << " ";
        for (int i = 2; i <= n; i += 2)
            cout << i << " ";
    }
}
