#include <bits/stdc++.h>
#define read(x) cin>>x
#define vi vector<int>
#define l(i,s,n) for (int i=int(s);i<int(n);i++)
#define pb push_back
#define f first
#define s second
#define no cout<<"NO"<<"\n"
#define yes cout<<"YES"<<"\n"
#define pii pair<int,int>
typedef long long ll;
using namespace std;

void solve(){
    int n,m;cin>>n>>m;
    vi a(n);vi b(m);l(i,0,n)read(a[i]);l(i,0,m)read(b[i]);
    vi f;f.insert(f.begin(),a.begin(),a.end());
    f.insert(f.end(),b.begin(),b.end());
    sort(f.begin(),f.end());
    for(int i=0;i<f.size();i++){
        cout<<f[i]<<"\n";
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(0);   
    
    solve();
}
