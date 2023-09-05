#include <bits/stdc++.h>
#define read(x,y) cin>>x>>y
#define print cout
#define vt vector<int> arr(size)
#define rep(i,n) for (int i=0;i<(n);i++)
typedef long long ll;
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string x;cin>>x;
    char first=x[0];

    print<<first;
    rep(i, x.length()){
        if(x[i]=='-'){
            print<<x[i+1]; // KMP
        }
    }
}
