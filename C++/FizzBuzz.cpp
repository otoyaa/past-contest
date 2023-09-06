#include <bits/stdc++.h>
#define read(x,y) cin>>x>>y
#define print cout
#define vt vector<int>
#define vt2 vector<string>
#define rep(i,s,n) for (int i=int(s);i<int(n);i++)
typedef long long ll;
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int x,y,n;cin>>x>>y>>n;

    rep(i,1,n+1){
        string a = to_string(i); // int --> string
        if(i%x==0 && i%y==0){
            a="FizzBuzz";
        }else if(i%y==0){
            a="Buzz";
        }else if(i%x==0){
            a="Fizz";
        }

        cout<<a<<"\n";
    }
}
